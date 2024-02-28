#include <napi.h>

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports["hello"] = "Hello, world!";
  return exports;
}

NODE_API_MODULE(addon, Init);