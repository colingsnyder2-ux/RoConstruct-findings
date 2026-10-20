// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_historypostincrementc904b47e01d1fc67.cpp

// Candidate translation unit (score above; library headers required).
#include <list>
struct Argument {char pad[28];std::list<int>::iterator position;};
struct Service{char pad[16];std::list<int> values;int get(const Argument*);};
int Service::get(const Argument*argument){std::list<int>::iterator i=argument->position;i++;if(i==values.end())return *values.begin();return *i;}
