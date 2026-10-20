// from server: 85% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.35.0 roc_espeon_tooldirectmemberbindea57c37dbe0cdfc2.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/signals/slot.hpp>
#include <boost/signals/connection.hpp>
struct Instance;struct Tool;
typedef void (Tool::*Callback)(boost::shared_ptr<Instance>);
typedef boost::slot<boost::function<void(boost::shared_ptr<Instance>)> > Slot;
struct Signal{boost::signals::connection connect(void*,const Slot&,int);};
struct Context{void* getObject();};Context* getContext(void*);extern Signal signal1,signal2;
struct Location{virtual void location();};struct Selectable{virtual void select();};
struct Primary{virtual ~Primary();};
struct Tool:Primary,virtual Location,virtual Selectable{char prefix[0xfc];void* context;char gap[0x138];boost::signals::scoped_connection first,second;void callback1(boost::shared_ptr<Instance>);void callback2(boost::shared_ptr<Instance>);void connect();};
void Tool::connect(){void* object=getContext(context)->getObject();first=signal1.connect(object?static_cast<char*>(object)+0x14:0,boost::bind(&Tool::callback1,this,_1),10);second=signal2.connect(object?static_cast<char*>(object)+0x14:0,boost::bind(&Tool::callback2,this,_1),10);}
