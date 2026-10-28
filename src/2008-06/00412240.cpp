// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_unit_e664e7078c137d36.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct T; typedef boost::shared_ptr<T> E;
#include <vector>
template class std::vector<E>;
