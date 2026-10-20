// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG 1
#include <boost/iostreams/filtering_stream.hpp>
template class boost::iostreams::filtering_stream<boost::iostreams::input>;
template class boost::iostreams::filtering_stream<boost::iostreams::output>;
template class boost::iostreams::chain<boost::iostreams::input>;
template class boost::iostreams::chain<boost::iostreams::output>;
