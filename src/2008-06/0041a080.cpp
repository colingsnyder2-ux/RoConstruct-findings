// from server: 69% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_luahtmlboost135ac44ac44521d17b1.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/function.hpp>
#include <boost/shared_ptr.hpp>
class CLuaHtmlView {public: void method();};
typedef void (CLuaHtmlView::*Callback)();
typedef boost::function<void(CLuaHtmlView*)> Function;
void __stdcall deliver(const boost::shared_ptr<CLuaHtmlView>&,Function);
struct Holder {char prefix[8]; boost::shared_ptr<CLuaHtmlView> target; Callback callback;};
void __cdecl invoke(Holder* h) { deliver(h->target,h->callback); }
