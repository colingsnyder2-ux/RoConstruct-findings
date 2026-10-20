// from server: 76% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_adornpoollayout316c38cb564090eb.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
struct Object {char storage[0x15c]; Object(void*);};
struct Collection {char storage[0x38]; void push_back(Object* const&);};
struct Pool {char prefix[0x48]; std::vector<Object*> cache; Collection active; void* context; Object* acquire();};
Object* Pool::acquire(){Object* result;if(cache.size()!=0){result=cache[cache.size()-1];cache.pop_back();}else result=new Object(context);Object* copy=result;active.push_back(copy);return result;}
