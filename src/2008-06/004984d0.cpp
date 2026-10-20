// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_callbackvector_5d81fe415eb64e1b.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <vector>
typedef boost::shared_ptr<void> Shared;
typedef std::vector<Shared> Vector;
struct Holder:boost::shared_ptr<Vector>{boost::shared_ptr<Vector> get();};
extern "C" void __cdecl alignedFree(void*);
struct Buffer {void* data; unsigned long reserved[4]; ~Buffer(){alignedFree(data);}};
struct Operation {unsigned long storage[2];void apply(unsigned long,Shared,Buffer*);};
struct S {unsigned char reserved[0x108];Holder children;void f(Operation,unsigned long,Buffer);};
void S::f(Operation operation,unsigned long argument,Buffer buffer){
 if(children){
  boost::shared_ptr<Vector> snapshot=children.get();
  Vector::iterator end=snapshot->end();
  Vector::iterator current=snapshot->begin();
  for(;current!=end;++current)operation.apply(argument,*current,&buffer);
 }
}
