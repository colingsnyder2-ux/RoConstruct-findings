// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_findunlockedmutable280cf891e540acd5.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG
#include <vector>
#include <boost/shared_ptr.hpp>
namespace RBX{
class Instance;
typedef std::vector<boost::shared_ptr<Instance> > Children;
struct ChildrenHolder{boost::shared_ptr<Children> get();};
class Instance{public:virtual~Instance();char prefix[0x100];Instance* parent;ChildrenHolder children;};
class PartInstance:public Instance{public:bool locked();};
Instance* findUnlocked(Instance* object){PartInstance* part=dynamic_cast<PartInstance*>(object);if(part&&!part->locked())return part;boost::shared_ptr<Children> children=object->children.get();if(Children* list=children.get()){Children::iterator end=list->end();Children::iterator current=list->begin();for(;current!=end;++current){if(findUnlocked(current->get()))return current->get();}}return 0;}
}
