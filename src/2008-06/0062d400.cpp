// from server: 89% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_recursiveiteratorconversion_fcc3062d2f8d4707.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
struct Object;
typedef boost::shared_ptr<Object> Pointer;
typedef std::vector<Pointer> Vector;
struct Holder : boost::shared_ptr<Vector> { boost::shared_ptr<Vector> snapshot(); };
struct Visitor { void (__cdecl* function)(Pointer,unsigned long,unsigned long); unsigned long first,second; void operator()(const Pointer& p) const { function(p,first,second); } };
struct Object { unsigned char reserved[0x108]; Holder children; void visit(Visitor); };
void Object::visit(Visitor visitor) {
 if(children) {
 const boost::shared_ptr<Vector> collection=children.snapshot();
 Vector::const_iterator finish=collection->end();
 for(Vector::const_iterator i=collection->begin();i!=finish;++i) {
 visitor(*i);
 (*i)->visit(visitor);
 }
 }
}
