// from server: 100% by auto
// from server: 90% by colin
// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG 1
#include <string>
#include <boost/iostreams/device/null.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/iostreams/stream_buffer.hpp>
template class boost::iostreams::stream_buffer<boost::iostreams::null_source>;
template class boost::iostreams::stream_buffer<boost::iostreams::null_sink>;
template class boost::iostreams::detail::indirect_streambuf<boost::iostreams::gzip_decompressor,std::char_traits<char>,std::allocator<char>,boost::iostreams::input>;
