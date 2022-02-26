#include <nan.h>
#include <cstdio>

using v8::FunctionTemplate;

NAN_METHOD(test) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected three arguments");
    return;
  }

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Expected a typed array");
    return;
  }

  //auto buf = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::TypedArrayContents<unsigned char> tarray(info[0]);
  
  printf("data: %s\n", *tarray);

  info.GetReturnValue().Set(5);
}

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("test").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(test)).ToLocalChecked());
}

NODE_MODULE(gljs, InitAll)
