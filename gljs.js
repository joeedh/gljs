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
  size    : "size_t",
  enum    : "int",
  sizei   : "size_t",
  uint    : "unsigned int",
  uchar   : "unsigned char",
  ushort  : "unsigned short",
  clampf  : "float",
  bitfield: "int",
  clampd  : "double",
  ubyte   : "unsigned char",
  byte    : "char"
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

    let s = '';

    if (!pointer) {
      let tostr = '';
      if (type === "int" || type === "short") {
        tostr = "Int32Value";
      } else {
        tostr = "Uint32Value";
      }

      s += `
  if (!info[${index}]->IsNumber()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected ${anType(type)}");
    return;
  }
  
  ${fulltype} arg${index} = info[${index}]->${tostr}(ctx).ToChecked();
      `;
    } else if (getBaseType(type) === "string") {
      s += `
  auto arg${index}_str = Nan::Utf8String(v8::Local<v8::Value> input[${index}]);
  ${fulltype} arg${index} = *arg${index}_str;
      
      `;
    } else if (pointer === 1 && getBaseType(type) === "string") {
      s += `
  if (!info[${index}]->IsString()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected a string");
    return;
  }
      `;
    } else {
      let type2 = getBaseType(type);
      type2 = type2 === "void" && arg.pointer === 1 ? "char" : type2;

      let tarraytype = type;

      for (let i = 0; i < arg.pointer; i++) {
        tarraytype += "*";
      }

      for (let i = 0; i < arg.pointer - 1; i++) {
        type2 += "*";
      }

      s += `
  if (!info[${index}]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<${type2}> arg${index}_tarray(info[${index}]);
  ${tarraytype} arg${index} = reinterpret_cast<${tarraytype}>(*arg${index}_tarray);
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
      let call = `  auto retval = ${func.name}(`
      for (let i = 0; i < func.args.length; i++) {
        if (i > 0) {
          call += ",";
        }
        call += "arg" + i;
      }

      s += call + ");\n";

      s += `
  info.GetReturnValue().Set(retval);
      `;
    } else {
      let call = `  ${func.name}(`
      for (let i = 0; i < func.args.length; i++) {
        if (i > 0) {
          call += ",";
        }
        call += "arg" + i;
      }

      s += call + ");\n";
    }

    return s + "\n}\n";
  }

  genAPI() {
    let s = `/* Warning: auto-generated code! */
#include <nan.h>
#include <cstdio>

#include <GL/gl.h>
//#include <GL/glew.h>
//#include <GL/glfw.h>

using v8::FunctionTemplate;

      `;

    for (let func of this.functions) {
      s += this.genAPIFunc(func) + '\n';
    }

    s += `\nNAN_MODULE_INIT(InitAll) {\n`;

    for (let func of this.functions) {
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
