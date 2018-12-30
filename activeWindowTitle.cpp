#include <napi.h>
#include <windows.h>
#include <string>

namespace activewindowtitle
{

Napi::String Wrapper(const Napi::CallbackInfo& info)
{
  Napi::Env env = info.Env();
  
  char wnd_title[256];
  HWND hwnd=GetForegroundWindow();
  GetWindowText(hwnd,wnd_title,sizeof(wnd_title));

  return Napi::String::New(env, wnd_title);
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  exports.Set("title", Napi::Function::New(env, Wrapper));
  
  return exports;
}


NODE_API_MODULE(activewindowtitle, Init)

}