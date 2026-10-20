// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-68dc4d2b8ff4e2a58d0b.cpp

// Candidate translation unit (score above; library headers required).
#define _SECURE_SCL 0
#define _HAS_ITERATOR_DEBUGGING 0
#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>
#include <memory>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/filter/zlib.hpp>

template class boost::detail::sp_counted_impl_p<boost::iostreams::detail::chain_base<boost::iostreams::chain<boost::iostreams::input,char,std::char_traits<char>,std::allocator<char> >,char,std::char_traits<char>,std::allocator<char>,boost::iostreams::input>::chain_impl>;
