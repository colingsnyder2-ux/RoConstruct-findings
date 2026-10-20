// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_bodymoverkernelargs78e6e0cf505d3f89.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG
#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>
namespace RBX {class Instance {public:virtual ~Instance();};class PartInstance:public Instance {};}
struct Link {void attach(void*);void detach(void*);};struct Owner{Link* getLink();};
struct Event {void* object;void* previous;RBX::Instance* current;};
struct S {char padding[0x130];char linkData[12];Owner* owner;boost::weak_ptr<RBX::PartInstance> parent;void baseChanged(Event*);void f(Event*);};
extern boost::shared_ptr<RBX::PartInstance> makeShared(RBX::PartInstance*);
extern Owner* findOwner(S*);
void S::f(Event*event){baseChanged(event);if(event->object==this)parent=makeShared(dynamic_cast<RBX::PartInstance*>(event->current));Owner* replacement=parent.lock()?findOwner(this):0;if(owner!=replacement){if(owner)owner->getLink()->detach(linkData);owner=replacement;if(replacement)replacement->getLink()->attach(linkData);}}
