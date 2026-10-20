// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG
#include <string>
#include <vector>
#include <boost/iostreams/device/null.hpp>
#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/stream_buffer.hpp>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/copy.hpp>
template class boost::iostreams::detail::indirect_streambuf<boost::iostreams::basic_null_device<char,boost::iostreams::input>,std::char_traits<char>,std::allocator<char>,boost::iostreams::input>;
template class boost::iostreams::detail::indirect_streambuf<boost::iostreams::basic_null_device<char,boost::iostreams::output>,std::char_traits<char>,std::allocator<char>,boost::iostreams::output>;
template class boost::iostreams::stream_buffer<boost::iostreams::back_insert_device<std::string> >;
template class boost::iostreams::filtering_stream<boost::iostreams::input>;
template class boost::iostreams::filtering_stream<boost::iostreams::output>;
template void boost::iostreams::detail::chain_base<boost::iostreams::chain<boost::iostreams::output,char,std::char_traits<char>,std::allocator<char> >,char,std::char_traits<char>,std::allocator<char>,boost::iostreams::output>::push_impl<boost::iostreams::detail::mode_adapter<boost::iostreams::output,std::streambuf> >(const boost::iostreams::detail::mode_adapter<boost::iostreams::output,std::streambuf>&,int,int);
template std::streamsize boost::iostreams::detail::copy_impl<boost::reference_wrapper<std::istream>,boost::iostreams::back_insert_device<std::string> >(boost::reference_wrapper<std::istream>&,boost::iostreams::back_insert_device<std::string>&,std::streamsize,boost::mpl::false_,boost::mpl::false_);
