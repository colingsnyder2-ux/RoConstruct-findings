// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 client-rtti-426bcf6f9b386e50043b.cpp

// Candidate translation unit (score above; library headers required).
#define _SECURE_SCL 0
#define _HAS_ITERATOR_DEBUGGING 0
#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>
#include <memory>
#include <boost/signal.hpp>

template class boost::detail::sp_counted_impl_p<boost::signals::detail::basic_connection>;
