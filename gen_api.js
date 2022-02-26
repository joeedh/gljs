import {api} from './gljs_def.js';

let code = api.genAPI();
import fs from 'fs';

fs.writeFileSync("gljs.cpp", code);
console.log(code);
