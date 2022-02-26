import {parser} from './parse.js';

const Types = {
  "i" : "GLint",
  "u" : "GLuint",
  "is": "GLshort",
  "us": "GLushort",
  "b" : "GLbool",
  "cv": "uchar*",
  "c" : "uchar",

};

let vowels = ["a", "e", "i", "o", "u"];

let typemap = {
  size     : "size_t",
  enum     : "int",
  sizei    : "size_t",
  uint     : "unsigned int",
  uchar    : "unsigned char",
  ushort   : "unsigned short",
  clampf   : "float",
  bitfield : "int",
  clampd   : "double",
  ubyte    : "unsigned char",
  byte     : "char",
  fixed    : "unsigned short",
  handleARB: "unsigned int",
  charARB  : "char",
  ucharARB : "unsigned char",
};

function getBaseType(type) {
  if (type.startsWith("GL")) {
    type = type.slice(2, type.length);
  }

  if (type in typemap) {
    return typemap[type];
  }

  return type;
}

function anType(type) {
  type = type.toLowerCase();
  if (vowels.indexOf(type[0]) >= 0) {
    return "an " + type;
  } else {
    return "a " + type;
  }
}

export class API {
  constructor(args = []) {
    this.functions = [];
    this.glewFuncs = [];
    this.enums = {};

    for (let arg of args) {
      this.add(arg);
    }
  }


  add(arg) {
    if (typeof arg === "string") {
      try {
        let arg2 = parser.parse(arg);
        arg = arg2;
      } catch (error) {
        console.log(error.stack);
        console.log(error.message);
        throw new Error("failed to parse '" + arg + "'");
      }

    }

    this.functions.push(arg);
  }

  addEnums(enums) {
    this.enums = Object.assign(this.enums, enums);
    return this;
  }

  handleArg(arg, index) {
    let type = arg.type;
    if (type.startsWith("GL")) {
      //type = type.slice(2, type.length);
    }

    if (type in typemap) {
      type = typemap[type];
    }

    let pointer = arg.pointer;

    let fulltype = type;
    for (let i = 0; i < arg.pointer; i++) {
      fulltype += "*";
    }
    if (arg.isConst) {
      //fulltype = "const " + fulltype;
    }

    //fulltype = arg.argStr;

    arg.fulltype = fulltype;

    let s = '';

    if (!pointer) {
      let type2 = getBaseType(type);

      let tostr = '';
      if (type2 === "float" || type2 === "double") {
        tostr = "NumberValue";
      } else if (type2 === "int" || type2 === "short") {
        tostr = "Int32Value";
      } else {
        tostr = "Uint32Value";
      }

      let addCast = '';

      if (type2 === "float" || type2 === "double" || type2.search("sizei") >= 0 ||
        type2.search("64") >= 0 || type2.search("intptr") >= 0) {
        addCast = `(${fulltype})`;
      }

      s += `
  if (!info[${index}]->IsNumber()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected ${anType(type)}");
    return;
  }
  
  ${fulltype} arg${index} = ${addCast}info[${index}]->${tostr}(ctx).ToChecked();
      `;
    } else if (getBaseType(type) === "string") {
      s += `
  auto arg${index}_str = Nan::Utf8String(v8::Local<v8::Value> input[${index}]);
  ${fulltype} arg${index} = *arg${index}_str;
      
      `;
    } else if (pointer === 1) {
      let type2 = getBaseType(type);
      type2 = type2 === "void" && arg.pointer === 1 ? "char" : type2;

      /* JS typed arrays do not support 64 bit integers */
      if (type2.search("64") >= 0 || type2 === "sizeiptr") {
        type2 = "char";
      }

      let tarraytype = type;

      for (let i = 0; i < arg.pointer; i++) {
        tarraytype += "*";
      }

      for (let i = 0; i < arg.pointer - 1; i++) {
        type2 += "*";
      }

      s += `
  ${tarraytype} arg${index};

  if (info[${index}]->IsNullOrUndefined()) {
    arg${index} = nullptr;
  } else {
    if (!info[${index}]->IsTypedArray()) {
      Nan::ThrowError("Invalid parameter ${index + 1}, expected a typed array");
      return;
    }
   
    Nan::TypedArrayContents<${type2}> arg${index}_tarray(info[${index}]);
    arg${index} = reinterpret_cast<${tarraytype}>(*arg${index}_tarray);
  }
      `;
    } else {
      let fulltype2 = fulltype.slice(0, fulltype.length - 1);

      s += `
  if (!info[${index}]->IsArray()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected array of typed arrays");
    return;
  }
  
  auto array${index} = info[0].As<v8::Array>();
  ${fulltype} arg${index} = static_cast<${fulltype}>(alloca(sizeof(void*)*array${index}->Length()));
    
  for (unsigned int i=0; i<array${index}->Length(); i++) {
    auto val = array${index}->Get(ctx, i);
    v8::Local<v8::Value> item;

    if (!val.ToLocalChecked()->IsTypedArray() || !val.ToLocal(&item)) {
      Nan::ThrowError("Invalid parameter ${index + 1}, expected array of typed arrays");
      return;
    }
    
    Nan::TypedArrayContents<char> tarray(item);
    arg${index}[i] = reinterpret_cast<${fulltype2}>(*item); 
  }
      `;
    }

    return s;

  }

  genAPIFunc(func) {
    let name = func.name;

    if (name.startsWith("gl")) {
      name = name.slice(3, name.length).trim();
      name = func.name[2].toLowerCase() + name;
    }

    func.jsName = name;

    let s = `      
NAN_METHOD(${name}) {
  if (info.Length() != ${func.args.length}) {
    Nan::ThrowError("Expected ${func.args.length} arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

`;

    let i = 0;
    for (let arg of func.args) {
      s += "  " + this.handleArg(arg, i).trim() + "\n";

      i++;
    }

    s += "\n\n";

    if (func.rtype !== "void") {
      let rtype = func.rtype.trim()
      let noconst = rtype.replace(/const/g, '');

      let rtype2 = rtype.replace(/GL/, '').trim();
      rtype2 = rtype2.replace(/[ \t]+/g, '');
      rtype2 = rtype2.replace(/const/g, '');

      let isStr = rtype2 === 'char*' || rtype2 === 'uchar*' || rtype2 === 'byte*' || rtype2 === 'ubyte*';

      let call = `  ${rtype} retval = ${func.name}(`
      for (let i = 0; i < func.args.length; i++) {
        if (i > 0) {
          call += ",";
        }
        call += "arg" + i;
      }

      s += call + ");\n";

      if (rtype.search("64") >= 0 || rtype === "GLintptr") {
        s += `
  info.GetReturnValue().Set((int32_t)retval);
      `;
      } else {
        if (isStr) {
          s += `
  info.GetReturnValue().Set(Nan::New<v8::String>((const char*)retval, strlen((const char*)retval)).ToLocalChecked());
      `;
        } else {
          s += `
  info.GetReturnValue().Set(retval);
      `;
        }
      }
    } else {
      let call = `  ${func.name}(`
      for (let i = 0; i < func.args.length; i++) {
        if (i > 0) {
          call += ",";
        }
        call += `(${func.args[i].argStr})arg${i}`;
      }

      s += call + ");\n";
    }

    return s + "\n}\n";
  }

  addGlew(funcs) {
    funcs = funcs.map(f => typeof f === "string" ? parser.parse(f) : f);
    this.glewFuncs = this.glewFuncs.concat(funcs);

    return this;
  }

  genGlew() {
    let proto = '';
    let init = '';

    for (let f of this.glewFuncs) {
      let args = '';

      let name = f.name;
      if (name.startsWith("gl")) {
        name = name.slice(2, name.length);
      }

      name = "ptr_" + name;

      for (let i = 0; i < f.args.length; i++) {
        let arg = f.args[i];
        if (i > 0) {
          args += ',';
        }

        let type = arg.type;

        for (let j = 0; j < arg.pointer; j++) {
          type += "*";
        }

        args += (type + ' ' + arg.name).trim();
      }

      if (0) {
        proto += "  " + `
${f.rtype} (*${name})(${args}) = NULL;
      `.trim() + "\n";
      }
    }

    return {
      glewProtoStr: proto,
      glewInitStr : init
    }
  }

  combine(api) {
    this.functions = this.functions.concat(api.functions);
    this.glewFuncs = this.glewFuncs.concat(api.glewFuncs);
    this.enums = Object.assign(this.enums, api.enums);

    return this;
  }

  genAPI() {
    let {glewProtoStr, glewInitStr} = this.genGlew();

    let s = `/* Warning: auto-generated code! */
#ifdef WIN32
#include <malloc.h>
#define alloca _alloca
#else
#include <alloca.h>
#endif

#include <nan.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cmath>

#define int64 int64_t
#define int64EXT int64_t
#define intptr intptr_t
#define uintptr uintptr_t

#include <GL/glew.h>
#include <GL/gl.h>
//#include <GL/glfw.h>

${glewProtoStr}

NAN_METHOD(initGlew) {
  GLenum err = glewInit();
  
  if (GLEW_OK != err)
  {
    fprintf(stderr, "Error: %s\\n", glewGetErrorString(err));
    return;
  }
  
  ${glewInitStr};
}

using v8::FunctionTemplate;

      `;

    let badnames = new Set([
      "GLDEBUGPROCAMD",
      "GLDEBUGPROCARB",
      "GLLOGPROCREGAL",
      "GLVULKANPROCNV",
      "GLDEBUGPROC",
      "GLsync",
      "GLeglClientBufferEXT",
      "GLvdpauSurfaceNV",
      "half",
      "GLhalf",
      "typedef",
      "using",
      "glNormalPointervINTEL",
      "glFogCoordPointerListIBM",
      "glIndexPointerListIBM",
      "glTexCoordPointervINTEL",
      "glColorPointervINTEL",
      "glVertexPointervINTEL",
    ]);

    /* do not wrap opencl functions */
    function badFunc(f) {
      if (f.name.search("IBM") >= 0) {
        return false;
      }

      if (f.name.search(/glShaderSource/) >= 0) {
        console.log(f, badnames.has(f.rtype));
      }

      if (f.name.trim() === "void") {
        return false;
      }

      if (f.name.trim().length === 0) {
        return false;
      }

      if (f.rtype.startsWith("cl_")) {
        return false;
      }

      if (badnames.has(f.rtype) || badnames.has(f.name)) {
        return false;
      }

      for (let arg of f.args) {
        if (arg.type.trim() === "") {
          return false;
        }
        if (arg.type.startsWith("cl_")) {
          return false;
        }

        if (badnames.has(arg.type)) {
          return false;
        }
      }

      return true;
    }

    let funcs = this.functions;

    let glewSet = new Set(this.glewFuncs.map(f => f.name));
    funcs = funcs.filter(f => !glewSet.has(f.name));
    funcs = funcs.concat(this.glewFuncs);

    let allSet = new Set();

    let funcs2 = [];
    for (let f of funcs) {
      if (allSet.has(f.name)) {
        continue;
      }

      allSet.add(f.name);
      funcs2.push(f);
    }
    funcs = funcs2;

    for (let f of funcs) {
      if (f.args.length === 1 && f.args[0].type === "void" && f.args[0].pointer === 0) {
        f.args = [];
      }

      if (f.name.search(/shaderSource\b/i) >= 0) {
        console.log(f);
      }
    }
    funcs = funcs.filter(f => badFunc(f));
    funcs = new Set(funcs);

    for (let func of funcs) {
      s += this.genAPIFunc(func) + '\n';
    }

    s += `\nNAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("initGlew").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(initGlew)).ToLocalChecked());    
    `;

    for (let func of funcs) {
      s += "  " + `
  Nan::Set(target, Nan::New("${func.jsName}").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(${func.jsName})).ToLocalChecked());
      `.trim() + "\n";
    }

    s += `
}

NODE_MODULE(gljs, InitAll)
`;
    return s;
  }
}
