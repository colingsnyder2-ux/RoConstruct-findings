// from server: 81% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_e867c8fe7f88f141.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>

struct lua_State;
class Service {
public:
    void setCallback(boost::function0<void> f);
};
extern Service* theService;

class BinderBase {
public:
    virtual ~BinderBase();
};

class Binder : public BinderBase, public boost::enable_shared_from_this<Binder> {
public:
    char pad[0x28 - 0xc];
    bool bound;
    static void onBind(lua_State* L, boost::shared_ptr<Binder> self);
    void bind();
};

void Binder::bind()
{
    if (!bound) {
        theService->setCallback(boost::bind(&Binder::onBind, (lua_State*)0, shared_from_this()));
        bound = true;
    }
}
