// from server: 75% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_deleteselectionconstd24dea069d647cae.cpp

// Candidate translation unit (score above; library headers required).
#define private public
#define protected public
#include "v8datamodel/Workspace.h"
#include "Network/Players.h"
#include <boost/shared_ptr.hpp>
#include <vector>
#include <string>
typedef std::vector<boost::shared_ptr<RBX::Instance> > Children;
struct Selection {boost::shared_ptr<Children> values;boost::shared_ptr<const Children> snapshot();};
struct Root{char prefix[0x154];Selection selection;};
struct History{void mark(int);};struct Context{Root*root();History*history();};

struct Argument{virtual void finish(int);};
extern void notify(const char*,unsigned);
struct Verb{unsigned prefix;const RBX::Name*name;unsigned reserved,value;char rest[16];Context*context;void prepare();void execute(Argument*);};
void Verb::execute(Argument*argument){prepare();Root*r=context?context->root():0;Selection*selection=&r->selection;if(selection->values->size()>0){boost::shared_ptr<const Children>snapshot=selection->snapshot();if(snapshot){for(Children::const_iterator it=snapshot->begin();it!=snapshot->end();++it){boost::shared_ptr<RBX::Instance>object=*it;if(!dynamic_cast<RBX::Workspace*>(object.get())&&!dynamic_cast<RBX::Network::Players*>(object.get()))object->setParent(0);}}History*h=context?context->history():0;h->mark(7);notify(name->c_str(),value);argument->finish(1);}}
