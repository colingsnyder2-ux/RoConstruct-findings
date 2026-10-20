// from server: 78% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_childpairconst_bb5611cc9d9a8bf0.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <vector>
struct Node;
typedef boost::shared_ptr<Node> NodePtr;
typedef std::vector<NodePtr> Vector;
typedef boost::shared_ptr<Vector> VectorPtr;
NodePtr __cdecl initialize(Node*);
struct Pair { NodePtr first,second; Pair(Node* a,Node*b):first(initialize(a)),second(initialize(b)) {} };
struct Action { void invoke(Pair,int); };
struct Context { char padding[0x64]; Action action; };
struct Children : VectorPtr { VectorPtr copy() const; };
struct Node { char padding[0x104]; Node* parent; Children children; void visit(Context*,int); };
void Node::visit(Context* context,int value) {
 if(children) {
  VectorPtr snapshot=children.copy();
  const Vector* vector=snapshot.get();
  Vector::const_iterator finish=vector->end();
  Vector::const_iterator current=vector->begin();
  for(;current!=finish;++current) {
   Node* child=(*current).get();
   Node* parentNode=child->parent;
   context->action.invoke(Pair(child,parentNode),value);
   child->visit(context,value);
  }
 }
}
