import {parser, setSilent} from './parse.js';

export function stripComments(buf) {
  let state = 'main';
  let out = '';
  let lastc = 0;
  let c;

  let buf2 = '';

  let states = {
    comment(i) {
      if (i >= buf.length - 1) {
        state = "main";
        return i;
      }

      if (buf[i] === "*" && buf[i + 1] === "/") {
        state = "main";
        return i + 2;
      }

      return i + 1;
    },

    main(i) {
      if (i < buf.length - 1 && buf[i] === "/" && buf[i + 1] === "*") {
        state = "comment";
        return i + 1;
      }

      buf2 += buf[i];
      return i + 1;
    },
    str(i) {

    }
  };

  for (let i = 0; i < buf.length; lastc = c) {
    i = states[state](i);
  }

  return buf2;
}

export function parseHeader(buf) {
  buf = stripComments(buf);
  buf = buf.replace(/APIENTRY/g, "").replace(/WINGDIAPI/g, "");
  buf = buf.replace(/\bconst\b/g, "");

  let lines = buf.split("\n");
  lines = lines.map(l => l.trim()).filter(l => l.length > 0);

  let enums = {};
  let funcs = [];

  for (let l of lines) {
    if (l.startsWith("#define")) {
      l = l.replace(/[ \t]+/g, ' ').split(" ");
      if (l.length > 2) {
        let key = l[1];
        let val = l[2];

        if (key.startsWith("GL_")) {
          key = key.slice(3, key.length);
        }

        let n = parseInt(val);
        if (!isNaN(n) && n) {
          val = n;
        }

        enums[key] = val;
      }
      //console.log(l);
      continue;
    }

    if (l.startsWith("#")) {
      continue;
    }

    if (l.endsWith(";")) {
      l = l.slice(0, l.length - 1).trim();
    }

    l = l.replace(/[ \t]+/, ' ').trim();
    let entry;

    try {
      setSilent(true);
      entry = parser.parse(l);
      setSilent(false);
    } catch (error) {
      //console.log(l);
      continue;
    }

    funcs.push(entry);
    //console.log(entry);
    //console.log(l);
  }


  let s = 'export const api = new API([\n';
  for (let f of funcs) {
    s += `  "${f.rtype} ${f.name}(`;
    for (let i = 0; i < f.args.length; i++) {
      let arg = f.args[i];

      let type = arg.type;
      for (let i=0; i<arg.pointer; i++) {
        type += "*";
      }

      if (i > 0) {
        s += ",";
      }

      s += `${type} ${arg.name}`;
    }
    s += `)",\n`;
  }

  s += `]);
api.addEnums(${JSON.stringify(enums, undefined, 2)});

`
  s = `/* WARNING: auto-generated code! */
import {API} from './gljs.js';

  ` + s;

  console.log(s)
  return s;
  //console.log(enums);
  //console.log(lines);
  //console.log(buf);
}

import fs from 'fs';

let files = ["gl.h", "glew.h"];

for (let f of files) {
  let name = f.slice(0, f.length-2);
  name = `gljs_def_${f}.js`;

  let code = fs.readFileSync(f, "utf8");
  code = parseHeader(code);
  fs.writeFileSync(name, code);
}
