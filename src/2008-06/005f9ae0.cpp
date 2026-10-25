// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_ca18cb6bd8223514.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG 1
#include <string>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/copy.hpp>
#include <boost/iostreams/device/back_inserter.hpp>
template void boost::iostreams::detail::chain_base<boost::iostreams::chain<boost::iostreams::input,char,std::char_traits<char>,std::allocator<char> >,char,std::char_traits<char>,std::allocator<char>,boost::iostreams::input>::push_impl<boost::iostreams::detail::mode_adapter<boost::iostreams::input,std::streambuf> >(const boost::iostreams::detail::mode_adapter<boost::iostreams::input,std::streambuf> &,int,int);
template void boost::iostreams::detail::chain_base<boost::iostreams::chain<boost::iostreams::input,char,std::char_traits<char>,std::allocator<char> >,char,std::char_traits<char>,std::allocator<char>,boost::iostreams::input>::push_impl<boost::iostreams::detail::mode_adapter<boost::iostreams::input,std::iostream> >(const boost::iostreams::detail::mode_adapter<boost::iostreams::input,std::iostream> &,int,int);
template void boost::iostreams::detail::chain_base<boost::iostreams::chain<boost::iostreams::output,char,std::char_traits<char>,std::allocator<char> >,char,std::char_traits<char>,std::allocator<char>,boost::iostreams::output>::push_impl<boost::iostreams::detail::mode_adapter<boost::iostreams::output,std::streambuf> >(const boost::iostreams::detail::mode_adapter<boost::iostreams::output,std::streambuf> &,int,int);
template void boost::iostreams::detail::chain_base<boost::iostreams::chain<boost::iostreams::output,char,std::char_traits<char>,std::allocator<char> >,char,std::char_traits<char>,std::allocator<char>,boost::iostreams::output>::push_impl<boost::iostreams::detail::mode_adapter<boost::iostreams::output,std::iostream> >(const boost::iostreams::detail::mode_adapter<boost::iostreams::output,std::iostream> &,int,int);
template std::streamsize boost::iostreams::detail::copy_impl<boost::reference_wrapper<std::istream>,boost::iostreams::back_insert_device<std::string> >(boost::reference_wrapper<std::istream>&,boost::iostreams::back_insert_device<std::string>&,std::streamsize,boost::mpl::false_,boost::mpl::false_);
