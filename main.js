import bindings from 'bindings';

let gljs = bindings("gljs");
let glfw = bindings("glfw");

let keys = Object.keys(gljs);
keys.sort((a, b) => (a > b)*2.0 - 1.0);
for (let k of keys) {
  if (k.toLowerCase().search(/shader/) >= 0) {
    console.log(k);
  }
}


