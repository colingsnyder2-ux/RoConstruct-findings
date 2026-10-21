// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_descendentaddedctorbodyf6569e83b6b7a030.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
struct Instance;
struct SignalSource {virtual ~SignalSource();};
struct Prefix {virtual ~Prefix();char padding[0x10];};
struct Event {boost::shared_ptr<Instance> child,parent;Event(Instance*,Instance*);};
struct Notifier {virtual ~Notifier();std::vector<void*> listeners;void* range;void raise(Event)const;};
struct Instance:Prefix,SignalSource {char gap[0x4c];Notifier notifier;char rest[0x80];Instance* parent;void onAdded(Instance*);};
struct Signal {void fire(SignalSource*,boost::shared_ptr<Instance>)const;};extern Signal addedSignal;
extern boost::shared_ptr<Instance> sharedInstance(Instance*);
void Instance::onAdded(Instance* child){if(notifier.listeners.size()>0)notifier.raise(Event(child,child->parent));addedSignal.fire(this,sharedInstance(child));}

Event::Event(Instance* c,Instance* p):child(sharedInstance(c)),parent(sharedInstance(p)){}
