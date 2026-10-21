// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_statesettailreturne582aafad99511f2.cpp

// Candidate translation unit (score above; library headers required).
#include <set>
struct Object{virtual void v0();virtual void v1();virtual void finish();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void process();};
struct S{char prefix[8];Object* next;char gap[36];std::set<Object*> objects;void update();};
void S::update(){for(std::set<Object*>::iterator it=objects.begin();it!=objects.end();++it)(*it)->process();return next->finish();}


