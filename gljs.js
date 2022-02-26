import * as parseutil from './parseutil.js';

const Types = {
    "i" : "GLint",
    "u" : "GLuint",
    "is" : "GLshort",
    "us" : "GLushort",
    "b" : "GLbool",
    "cv" : "uchar*",
    "c" : "uchar"
};

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
    constructor(args=[]) {
        this.functions = [];

        for (let arg of args) {
            this.add(arg);
        }
    }


    add(arg) {
        this.functions.push(arg);
    }
}

let api = new API([
    "glTexImge2D(enum,int,int,size,size,int,enum,enum,void*)",
]);