import bindings from 'bindings';

let module = bindings("gljs");
module.test(new Uint8Array(["s".charCodeAt(0), 0]), 2, 3);

console.log(module);


