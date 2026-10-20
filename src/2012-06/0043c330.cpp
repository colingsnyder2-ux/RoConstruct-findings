// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 client-rtti-26162d86517c99a893b1.cpp

// Candidate translation unit (score above; library headers required).
#define _SECURE_SCL 0
#define _HAS_ITERATOR_DEBUGGING 0
#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>
#include <memory>

template class boost::detail::sp_counted_impl_p<std::vector<void *,std::allocator<void *> > >;
