// from server: 97% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_espclaude_c42a908c6ddd2e5f.cpp

// Candidate translation unit (score above; library headers required).
#define _DLL
#include <string>
#include <stdexcept>
#include <boost/function.hpp>

namespace RBX {

struct LuaRef {
    char pad[0x18];
    int ref;
};

void pushFunction(int ref, LuaRef* f);

class ScriptContext {
public:
    void resume(int ref, boost::function0<void> success, boost::function1<void, std::string> error);
    void call(LuaRef* f, boost::function0<void> success, boost::function1<void, std::string> error);
};

void ScriptContext::call(LuaRef* f, boost::function0<void> success, boost::function1<void, std::string> error)
{
    if (!f->ref)
        throw std::runtime_error("Cannot call a nil function");
    pushFunction(f->ref, f);
    resume(f->ref, success, error);
}

}
