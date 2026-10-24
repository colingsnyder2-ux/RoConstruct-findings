// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1-dll roc_espeon_worker134exceptions0a589d1e382b4682.cpp

// Candidate translation unit (score above; library headers required).
#define _CPPUNWIND 1
#define NDEBUG 1
#include <boost/shared_ptr.hpp>
#include <boost/function.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/condition.hpp>
struct State {
 boost::mutex mutex;
 boost::condition condition;
 bool stopped;
};
void __cdecl worker(boost::shared_ptr<State> state, const boost::function0<int>& function) {
 while(!state->stopped) {
  if(function()==1) continue;
  boost::mutex::scoped_lock lock(state->mutex);
  state->condition.wait(lock);
 }
}
