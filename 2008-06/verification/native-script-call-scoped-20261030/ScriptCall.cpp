#include "script/ScriptContext.h"
#include <stdexcept>
namespace RBX {
void ScriptContext::call(const Lua::FunctionRef& f,PushArgumentsClosure pushArguments,ReadResultsClosure readResults){
 if(f.empty())throw std::runtime_error("Cannot call a nil function");
 Lua::lua_pushfunction(f.thread(),f);
 resume(f.thread(),pushArguments,readResults);
}
}
