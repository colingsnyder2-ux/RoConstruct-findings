// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/iostreams/filtering_stream.hpp>
template class boost::iostreams::filtering_stream<boost::iostreams::input>;
template class boost::iostreams::filtering_stream<boost::iostreams::output>;
template class boost::iostreams::chain<boost::iostreams::input>;
template class boost::iostreams::chain<boost::iostreams::output>;
