// from server: 71% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_verbmap_9a650ff3391cf169.cpp

// Candidate translation unit (score above; library headers required).
#include <map>
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Result;
struct Guard {unsigned value;Guard(Result);~Guard();};
struct Verb {virtual void slot0();virtual void slot1();virtual void slot2();virtual void slot3();virtual void execute(void*);};
struct Registry {Verb* lookup(void*);};
typedef std::map<int,void*> Map;
struct S {char padding[84];Map map;Result copy();Registry* registry();void f(int,int);};
void S::f(int key,int mode){
 if(mode!=0&&mode!=-1)return;
 Map::iterator position=map.find(key);
 if(position==map.end()||!position->second)return;
 Result result=copy();
 Guard guard(result);
 void* value=position->second;
 Registry* collection=registry();
 if(!collection)return;
 Verb* verb=collection->lookup(value);
 if(!verb)return;
 if(mode==0){try{verb->execute(result.get()?static_cast<char*>(result.get())+0x1f0:0);}catch(...){}}
}
