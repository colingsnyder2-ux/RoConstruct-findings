// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_c59fdf18c9553c65.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG 1
#include <string>
#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/stream_buffer.hpp>
template class boost::iostreams::stream_buffer<boost::iostreams::back_insert_device<std::string> >;
