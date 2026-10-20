// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_marshallerhandler_c0337a663ad67b7d.cpp

// Candidate translation unit (score above; library headers required).
namespace boost{template<class E> __declspec(noreturn) void throw_exception(E const&);}
#include <deque>
#include <boost/function.hpp>
#include <boost/thread/mutex.hpp>
struct Marshaller{char padding[0x2c];std::deque<boost::function<void()> > queue;boost::mutex mutex;int execute(unsigned int,unsigned int,unsigned int,int*);};int Marshaller::execute(unsigned int,unsigned int,unsigned int,int*){try{boost::function<void()> function;{boost::mutex::scoped_lock lock(mutex);function=queue.front();queue.clear();}function();}catch(...){}return 0;}
