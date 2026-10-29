// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG 1
#include <istream>
#include <ostream>
#include <boost/ref.hpp>
#include <boost/iostreams/stream_buffer.hpp>
template class boost::iostreams::stream_buffer<boost::reference_wrapper<std::istream> >;
template class boost::iostreams::stream_buffer<boost::reference_wrapper<std::ostream> >;
