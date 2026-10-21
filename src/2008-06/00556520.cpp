// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_runservicestartmultiplec5666a73e63d0f70.cpp

// Candidate translation unit (score above; library headers required).
#include "v8datamodel/DataModel.h"
#include <boost/thread/thread.hpp>
#include <boost/scoped_ptr.hpp>
namespace RBX {boost::function0<void> background_function(const boost::function0<void>&,const char*,int);}
struct BaseA {virtual ~BaseA();};struct BaseB {virtual ~BaseB();};
struct Runner:BaseA,BaseB {char prefix[0xfc];RBX::Instance* parent;char gap[0x174];boost::scoped_ptr<boost::thread> thread;void start();void runProc(boost::shared_ptr<RBX::DataModel>);};
extern boost::shared_ptr<Runner> sharedRunner(Runner*);
void Runner::start(){boost::shared_ptr<RBX::DataModel> dataModel=RBX::shared_from(dynamic_cast<RBX::DataModel*>(parent));thread.reset(new boost::thread(RBX::background_function(boost::bind(&Runner::runProc,sharedRunner(this),dataModel),"rbx_runProc",-1)));}
