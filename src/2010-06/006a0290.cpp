// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 client-rtti-bcf50994d5f14a171182.cpp

// Candidate translation unit (score above; library headers required).
#define _SECURE_SCL 0
#define _HAS_ITERATOR_DEBUGGING 0
#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>
#include <memory>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/filter/zlib.hpp>

template class boost::detail::sp_counted_impl_p<boost::iostreams::symmetric_filter<boost::iostreams::detail::zlib_compressor_impl<std::allocator<char> >,std::allocator<char> >::impl>;
