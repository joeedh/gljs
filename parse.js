import {tokdef, parser as Parser, lexer} from "./parseutil.js"

let t = (name, re, func) => new tokdef(name, re, func);
let tokens = [
  t("ID", /[a-zA-Z_]+[a-zA-Z_0-9]*/),
  t("LPAREN", /\(/),
  t("RPAREN", /\)/),
  t("STAR", /\*/),
  t("COMMA", /,/),
  t("EQUALS", /=/),
  t("NUMBER", /[0-9]+/),
  t("WS", /[ \n\r\t]+/, () => undefined), //drop token
];

function p_start(p) {
  let name = p.expect("ID")
  let rtype = "void";

  if (p.peeknext().type === "ID") {
    rtype = name;
    name = p.expect("ID");
  }

  p.expect("LPAREN");

  let args = [];

  let t = p.peeknext()
  while (t && t.type !== "RPAREN") {
    let arg = p.expect("ID");

    arg = {name : arg, pointer : 0};

    while (p.optional("STAR")) {
      arg.pointer++;
    }

    args.push(arg);

    p.optional("COMMA");
    t = p.peeknext()
  }

  p.expect("RPAREN");
  return {
    args, name, rtype
  }
}

function p_error(token, msg) {
  console.log("error!", msg)
  throw new Error(msg);
}

let lex = new lexer(tokens);
export let parser = new Parser(lex, p_error);
parser.start = p_start;

