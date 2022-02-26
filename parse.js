import { tokdef, parser as Parser, lexer, parser } from "./parseutil.js" parseutil from './parseutil.js'

let t = (name, re, func) => new tokdef(name, re, func);
let tokens = [
    t("ID", /[a-zA-Z_]+[a-zA-Z_0-9]*/),
    t("LPAREN", /\(/),
    t("RPAREN", /\)/),
    t("STAR", /\*/),
    t("COMMA", /,/),
    t("EQUALS", /=/),
    t("NUMBER", /[0-9]+/)
];

function p_start(p) {
    let name = p.expect("ID")
    p.expect("LPAREN");

    let args = [];

    let t = p.peekone()
    while (t.type != "RPAREN") {
        let arg = p.expect("ID");
        args.push(arg);

        p.optional("COMMA");
        t = p.peekone()
    }
}

function p_error(token, msg) {
    console.log("error!", message)
}

let lex = new lexer(tokens);
parser = new Parser(lex, p_error);
parser.start = p_start;

