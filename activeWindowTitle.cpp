#include <napi.h>
#include <windows.h>
#include <string>

namespace awtnamespace
{
  std::string GetActiveWindowTitle();
  Napi::String Wrapper(const Napi::CallbackInfo& info);
  Napi::Object Init(Napi::Env env, Napi::Object exports);
}

std::string awtnamespace::GetActiveWindowTitle()
{
 char wnd_title[256];
 HWND hwnd=GetForegroundWindow();
 GetWindowText(hwnd,wnd_title,sizeof(wnd_title));
 return wnd_title;
}


Napi::String awtnamespace::Wrapper(const Napi::CallbackInfo& info)
{
  Napi::Env env = info.Env();
  Napi::String returnValue = Napi::String::New(env, awtnamespace::GetActiveWindowTitle());

  return returnValue;
}

Napi::Object awtnamespace::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set("title", Napi::Function::New(env, awtnamespace::Wrapper));
  
  return exports;
}

Napi::Object InitAll(Napi::Env env, Napi::Object exports)
{
  return awtnamespace::Init(env,exports);
}

NODE_API_MODULE(activewindowtitle, InitAll)