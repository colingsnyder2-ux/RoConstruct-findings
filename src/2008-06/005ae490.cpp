// from server: 99% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_espclaude_4649ad918a7d484d.cpp

// Candidate translation unit (score above; library headers required).
#define _DLL
#define private public
#include "util/IRenderable.h"
#undef private
#include "util/Object.h"
#define hasListeners() hasListeners() const { return listeners.size() > 0; } bool hasListenersEmpty()
#include "util/Events.h"
#undef hasListeners
namespace RBX { template<class T> class GuidItem { public: virtual ~GuidItem() {} char guidPad[0xc]; }; }
#define AbstractFactoryProduct GuidItem<Instance>, public AbstractFactoryProduct
#include "util/Guid.h"
namespace RBX { class GuidStub { public: typedef Guid::Data Data; void assign(const Data&) {} operator const Guid&() const { return *(const Guid*)0; } }; }
#define Guid GuidStub
#include "v8tree/Instance.h"
#undef Guid
#undef AbstractFactoryProduct
#include <boost/thread/mutex.hpp>
#include <boost/thread/condition.hpp>
#define statsItem statsItem; double exeTime0; double exeTime1; boost::shared_ptr<void> exeShared; boost::mutex exeMutex; boost::condition exeCondition
#include "script/ScriptContext.h"
#undef statsItem
#include "script/Script.h"
#include "script/ScriptEvent.h"
#include "script/LuaMemory.h"
#include "script/LuaAtomicClasses.h"
#include "script/LuaInstanceBridge.h"
#include "script/LuaSignalBridge.h"
#include "script/LuaArguments.h"
#include "lua/lua.hpp"
#include "lua/LuaBridge.h"
#include "v8datamodel/Workspace.h"
#include "v8datamodel/DebugSettings.h"
#include "v8datamodel/Stats.h"
#include "util/standardout.h"
#include "util/Debug.h"
#include "boost/date_time/posix_time/posix_time.hpp"

using namespace RBX;
using namespace boost::posix_time;

ScriptContext::ScriptContext()
    : globalState(NULL),
      scripts(std::less<Script*>()),
      nextPendingScripts(second_clock::local_time()),
      scriptsDisabled(false),
      exeTime0(0),
      exeTime1(0)
{
    setName("Script Context");
}
