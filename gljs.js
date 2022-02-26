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

function anType(type) {
  type = type.toLowerCase();
  if (vowels.indexOf(type[0]) >= 0) {
    return "an " + type;
  } else {
    return "a " + type;
  }
}

class Type {
  constructor(type, name) {
    this.name = name;
    this.type = type;
  }
}

class Binding {
  constructor(name, args) {
    this.name = name;
    this.args = args;
  }
}

class API {
  constructor(args = []) {
    this.functions = [];

    for (let arg of args) {
      this.add(arg);
    }
  }


  add(arg) {
    if (typeof arg === "string") {
      arg = parser.parse(arg);

    }

    console.log(arg)
    this.functions.push(arg);
  }

  handleArg(arg, index) {
    let typemap = {
      size : "size_t",
      enum : "GLenum",
      bool : "GLbool"
    };


    let type = arg.name;
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
  if (!info[${index}].IsNumber()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected ${anType(type)}");
    return;
  }
  
  ${fulltype} arg${index} = info[${index}]->${tostr}(ctx).ToChecked();
      `;
    } else {
      let type2 = type === 'void' ? 'char ' : type;

      s += `
  if (!info[${index}].IsTypedArray()) {
    Nan::ThrowError("Invalid parameter ${index + 1}, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<${type2}> arg${index}_tarray(info[${index}]);
  ${fulltype} arg${index} = reinterpret_cast<${type}*>(*arg${index}_tarray);
      `;
    }

    return s;

  }

  genAPIFunc(func) {
    let name = func.name;

    if (name.startsWith("gl")) {
      name = name.slice(2, name.length).trim();
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
#include <GL/gl.h>
//#include <GL/glew.h>
//#include <GL/glfw.h>

#include <nan.h>
#include <cstdio>

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

let api = new API([
  "void glTexImge2D(enum,int,int,size,size,int,enum,enum,void*)",
]);

let code = api.genAPI();
import fs from 'fs';

console.log(code);
