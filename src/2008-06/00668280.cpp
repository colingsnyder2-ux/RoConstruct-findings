// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_treemulticonst_c4b3aa6724ad5159.cpp

// Candidate translation unit (score above; library headers required).
#include <map>
typedef std::multimap<unsigned,unsigned> Tree;
struct S {char padding[48];Tree tree;void f(unsigned value,unsigned key);};
void S::f(unsigned value,unsigned key) {
 if(!key)return;
 for(Tree::const_iterator it=tree.lower_bound(key);it!=tree.upper_bound(key);++it){
  if(it->second==value){tree.erase(it);break;}
 }
}
