// from server: 85% by EspClaude
// from server: 53% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_788ff6881a3686b8.cpp

// Candidate translation unit (score above; library headers required).
#define _DLL
#include <stddef.h>
#include <vector>
#include <set>
#include <algorithm>
#include <boost/shared_ptr.hpp>
#include <boost/bind.hpp>
namespace RBX {
template<class Class>
boost::shared_ptr<Class> shared_from(Class* r);
class Script;
class SCBase0 { public: virtual ~SCBase0(); };
class SCBase1 { public: virtual ~SCBase1(); };
class ScriptContext : public SCBase0, public SCBase1 {
public:
	void addScript(Script* script);
};
class Camera {
public:
	void alwaysMode();
};
class ICameraOwner {
public:
	virtual ~ICameraOwner();
	virtual Camera* getCamera() = 0;
};
struct WorkspacePad { virtual ~WorkspacePad(); char pad[0x284]; };
class Workspace : public WorkspacePad, public ICameraOwner {
public:
	char pad2[0x3d0 - 0x28c];
	bool isSimulating;
	std::set<Script*> pendingScripts;
	ScriptContext* scriptContext;
	void start();
};
typedef char chk1[(offsetof(Workspace, pendingScripts) == 0x3d4) ? 1 : -1];
typedef char chk2[(offsetof(Workspace, scriptContext) == 0x3f4) ? 1 : -1];
void Workspace::start()
{
	isSimulating = true;

	getCamera()->alwaysMode();

	if (scriptContext)
	{
		std::vector<boost::shared_ptr<Script> > startScripts;

		std::set<Script*>::const_iterator iter = pendingScripts.begin();
		std::set<Script*>::const_iterator end = pendingScripts.end();

		for (; iter != end; iter++)
		{
			startScripts.push_back(shared_from(*iter));
		}

		pendingScripts.clear();
		std::for_each(startScripts.begin(), startScripts.end(), boost::bind(&ScriptContext::addScript, scriptContext, boost::bind(&boost::shared_ptr<Script>::get, _1)));
	}
}
}
