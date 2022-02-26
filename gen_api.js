import * as gl from './gljs_def_gl.h.js';
import * as glew from './gljs_def_glew.h.js';

glew.api.combine(gl.api);

let code = glew.api.genAPI();
import fs from 'fs';

fs.writeFileSync("gljs.cpp", code);
//console.log(code);
