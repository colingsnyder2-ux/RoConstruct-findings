// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 client-rtti-0806de51659b7c42a80f.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/any.hpp>
#include <string>
#include <vector>
#include <memory>

template class boost::any::holder<float>;
