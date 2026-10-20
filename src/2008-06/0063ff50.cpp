// from server: 87% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_clonepart_4682de20eacf25fd.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <vector>
struct Object;
typedef boost::shared_ptr<Object> Shared;
struct Transform {char data[36];};
struct Object {Transform* transform();Shared clone();};
struct Part:Object {};
typedef boost::shared_ptr<Part> PartPtr;
extern PartPtr __cdecl convert(const Shared&) throw();
typedef std::vector<Shared> Collection;
extern void __stdcall apply(Collection*,Object*,int,int);
struct Service{void notify(int);};
extern Service* __cdecl findService(Object*);
struct Tool {virtual void unused();virtual int run(void*);Tool(Object*,void*,Object*,Shared);char data[64];};
struct CloneTool{char padding[24];Object* context;Object* source;int execute(void*);};
int CloneTool::execute(void* argument){
 if(source){
 source->transform();
 PartPtr copy=convert(source->clone());
 Collection collection;
 Object* cloned=copy.get();
 collection.push_back(Shared(copy));
 apply(&collection,context,1,1);
 findService(context)->notify(8);
 Tool* tool=new Tool(cloned,reinterpret_cast<char*>(cloned->transform())+36,context,Shared());
 return tool->run(argument);
 }return 0;
}
