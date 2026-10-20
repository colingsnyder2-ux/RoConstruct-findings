// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/stream_buffer.hpp>
template class boost::iostreams::stream_buffer<boost::iostreams::back_insert_device<std::string> >;
