// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_large_tree_c038c7cd2fa8574a.cpp

// Candidate translation unit (score above; library headers required).
// Native four 2,004-byte functions follow MSVC's checked tree erase/rebalance.
// Value types below are codegen analogues; original container types remain unknown.
#define _DLL
#include <map>
template class std::map<int, int>;
std::map<int, int>::iterator eraseOne(std::map<int, int>& tree,
                                    std::map<int, int>::iterator position) {
    return tree.erase(position);
}
