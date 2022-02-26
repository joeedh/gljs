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

export function doGlew(buf) {
  let prefix = /typedef ([a-zA-Z_0-9]+) \(\*/;

  let lines = buf.split("\n");
  lines = lines.map(l => l.trim()).filter(l => l.length);
  let lines2 = [];

  let i = 0;
  for (let l of lines) {
    lines2.push({i, l});
    i += l.length + 1;
  }

  buf = lines.join("\n");
  lines = lines2;

  let funcs = [];

  for (let {l, i} of lines) {
    let res = l.match(prefix);
    let prefixLen;
    let type;

    if (res) {
      prefixLen = res[0].length;
      type = res[1];
    } else {
      continue;
    }

    l = l.slice(prefixLen, l.length);
    l = l.slice(l.search("GL"), l.length);

    let name = l.slice(0, l.search("\\)"));
    if (name.endsWith("PROC")) {
      name = name.slice(0, name.length - 4);
    }

    let re = new RegExp(name + "\\b", "i");
    let buf2 = buf.slice(i + 10, i + 20960);

    let match = buf2.search(re);

    if (match < 0) {
      //console.error("Could not resolve glew name", name);
      continue;
    }

    name = buf2.slice(match, match + name.length);

    if (name.endsWith("SUN") || name.endsWith("SGI") || name.endsWith("SGIX") ||
      name.endsWith("SGIS") || name.endsWith("SUNX")) {
      continue;
    }

    l = l.slice(l.search("\\("), l.length).trim();
    if (l.endsWith(";")) {
      l = l.slice(0, l.length - 1);
    }

    //l = l.replace(/\bconst\b/g, '');
    l = type + " " + name + l;

    if (type.startsWith("cl_")) {
      continue;
    }

    let func;
    try {
      func = parser.parse(l);
    } catch (error) {
      console.warn("failed to parse " + l);
      continue;
    }

    funcs.push({
      func, name
    });
  }

  return funcs;
}

export function parseHeader(buf) {
  buf = stripComments(buf);
  buf = buf.replace(/GLEWAPIENTRY/g, '');
  buf = buf.replace(/WINGDIAPI/g, '');
  buf = buf.replace(/GLAPIENTRY/g, '');
  buf = buf.replace(/APIENTRY/g, '');
  buf = buf.replace(/GLAPI/g, '');
  //buf = buf.replace(/\bconst\b/g, '');
  buf = buf.replace(/GLEWAPI/g, '');
  //buf = buf.replace(/GLcharARB/g, 'GLchar');
  //buf = buf.replace(/GLhandleARB/g, 'GLhandle');

  //collapse repeated whitespace
  buf = buf.replace(/[ \t]+/g, " ");
  buf = buf.replace(/[ \t]+/g, " ");
  buf = buf.replace(/\([ \t]+/g, "(");
  buf = buf.replace(/, /g, ",");

  let glewFuncs = doGlew(buf);
  //buf = buf.replace(/\bconst\b/g, "");

  let glewSet = new Set(glewFuncs.map(f => f.name));
  glewFuncs = glewFuncs.map(f => f.func);

  let lines = buf.split("\n");
  lines = lines.map(l => l.trim()).filter(l => l.length > 0);

  let enums = {};
  let funcs = [];

  for (let l of lines) {
    if (l.startsWith("#define")) {
      if (l.search(/GLEW_GET_FUN/) >= 0) {
        continue;
      }

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

    if (glewSet.has(entry.name)) {
      continue;
    }

    funcs.push(entry);
    //console.log(entry);
    //console.log(l);
  }


  let badnames = new Set([
    "GLDEBUGPROCAMD",
    "GLDEBUGPROCARB",
  ]);

  let s = 'export const api = new API(';

  //glewFuncs
  function writeFuncs(funcs) {
    s += '[\n';

    for (let f of funcs) {
      if (badnames.has(f.name.trim())) {
        continue;
      }

      s += `  "${f.rtype} ${f.name}(`;
      for (let i = 0; i < f.args.length; i++) {
        let arg = f.args[i];

        let type = arg.type;
        for (let i = 0; i < arg.pointer; i++) {
          type += "*";
        }

        if (i > 0) {
          s += ",";
        }

        s += `${arg.argStr} ${arg.name}`;
      }
      s += `)",\n`;
    }
    s += "]);\n";
  }

  writeFuncs(funcs);

  s += 'api.addGlew('
  writeFuncs(glewFuncs);

  s += `;
api.addEnums(${JSON.stringify(enums, undefined, 2)});

`
  s = `/* WARNING: auto-generated code! */
import {API} from './gljs.js';

  ` + s;

  //console.log(s)
  return s;
  //console.log(enums);
  //console.log(lines);
  //console.log(buf);
}

import fs from 'fs';

let files = [
  "gl.h",
  "glew.h"
];

for (let f of files) {
  let name = f.slice(0, f.length - 2);
  name = `gljs_def_${f}.js`;

  let code = fs.readFileSync(f, "utf8");
  code = parseHeader(code);
  fs.writeFileSync(name, code);
}
