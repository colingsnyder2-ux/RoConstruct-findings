// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_serializemappairderef_b1170334adf273a7.cpp

// Candidate translation unit (score above; library headers required).
#include <map>
#include <string>
extern void __cdecl writeValue(void*,unsigned int);extern void __cdecl writeString(void*,const std::string&);struct S{std::map<unsigned int,unsigned int> values;std::string get(unsigned int);void f(void*);};void S::f(void*output){writeValue(output,values.size());for(std::map<unsigned int,unsigned int>::iterator it=values.begin();it!=values.end();++it){writeValue(output,(*it).second);std::string text=get((*it).first);writeString(output,text);}}
