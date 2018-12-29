#include <napi.h>
#include <windows.h>

namespace awtnamespace {
  std::string GetActiveWindowTitle();
  Napi::String Wrapper(const Napi::CallbackInfo& info);
  Napi::Object Init(Napi::Env env, Napi::Object exports);
}