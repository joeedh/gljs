import {tokdef, parser as Parser, lexer} from "./parseutil.js"

let t = (name, re, func) => new tokdef(name, re, func);
let tokens = [
  t("ID", /[a-zA-Z_]+[a-zA-Z_0-9]*/, t => {
    if (t.value === "const") {
      t.type = "CONST";
    }

    return t;
  }),
  t("LPAREN", /\(/),
  t("RPAREN", /\)/),
  t("STAR", /\*/),
  t("COMMA", /,/),
  t("EQUALS", /=/),
  t("NUMBER", /[0-9]+/),
  t("WS", /[ \n\r\t]+/, () => undefined), //drop token
];

function p_id_or_const(p) {
  if (p.peeknext().type === "CONST") {
    return p.expect("CONST");
  } else {
    return p.expect("ID");
  }
}

function p_id_or_const_or_star(p) {
  if (p.peeknext().type === "CONST") {
    return p.expect("CONST");
  } else if (p.peeknext().type === "STAR") {
    return p.expect("STAR");
  } else if (p.peeknext().type === "ID") {
    return p.expect("ID");
  }
}

function p_var(p) {
  let arg = {type: '', argStr: '', name: '', pointer: 0};

  let id = p_id_or_const_or_star(p);

  while (id) {
    if (id === "const") {
      arg.isConst = true;
      arg.argStr += " " + id;

      id = p_id_or_const_or_star(p);
      continue;
    }

    if (id === "*") {
      if (arg.name.length > 0) {
        arg.argStr += " " + arg.name;
        arg.type = arg.name;
        arg.name = '';
      }

      arg.argStr += id;
      arg.pointer++;

      id = p_id_or_const_or_star(p);
      continue;
    }

    if (arg.name) {
      arg.argStr += " " + arg.name;
      arg.type = arg.name;
    }

    arg.name = id;

    id = p_id_or_const_or_star(p);
  }

  arg.type = arg.type.trim();
  arg.name = arg.name.trim();
  arg.argStr = arg.argStr.trim();

  if (arg.type.length === 0 && arg.name === 'void') {
    arg.type = 'void';
  }

  return arg;
}

function p_start(p) {
  let ret = p_var(p);
  let name = ret.name;
  let rtype = ret.argStr;

  p.expect("LPAREN");

  let args = [];

  let t = p.peeknext()
  while (t && t.type !== "RPAREN") {
    let arg = p_var(p);

    args.push(arg);

    p.optional("COMMA");
    t = p.peeknext()
  }

  if (args.length === 1 && args[0].type === "void" && args[0].pointer === 0) {
    args = [];
  }

  p.expect("RPAREN");
  return {
    args, name, rtype
  }
}

let silent = false;

export function setSilent(state) {
  silent = state;
}

function p_error(token, msg) {
  if (!silent) {
    console.log(msg)
  }
  throw new Error(msg);
}

let lex = new lexer(tokens);
export let parser = new Parser(lex, p_error);
parser.start = p_start;

