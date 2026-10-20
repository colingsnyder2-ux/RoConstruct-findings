// from server: 88% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_clientstdvector_fd33ad941191375e.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <vector>
typedef boost::shared_ptr<void> Value;
typedef std::vector<Value> Vector;
struct VectorPtr : boost::shared_ptr<Vector> { boost::shared_ptr<Vector> acquire() const; };
struct Output { void* first; void* second; void apply(void*,Value); };
struct S { char padding[0x108]; VectorPtr values; void f(Output,void*,unsigned long); };
void S::f(Output output, void* argument, unsigned long) {
 if (!values) return;
 boost::shared_ptr<Vector> snapshot=values.acquire();
 Vector::iterator finish=snapshot->end();
 Vector::iterator current=snapshot->begin();
 for (;current!=finish;++current) output.apply(argument,*current);
}
