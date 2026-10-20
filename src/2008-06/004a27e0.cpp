// from server: 87% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_actionowner_6e4e3ddad2f60e73.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <vector>
struct Node;
typedef boost::shared_ptr<Node> Item;
typedef std::vector<Item> Vector;
typedef boost::shared_ptr<Vector> Collection;
struct Action { unsigned long first, second; void* context; unsigned long fourth; void invoke(void*,Item); };
struct ChildOwner : Collection { Collection copy() const; };
struct Node { unsigned char reserved[0x108]; ChildOwner children; void visit(Action); };
Collection copyCollection(const Collection&);
void Node::visit(Action action) {
 if(children) {
  Collection collection=children.copy();

  Vector::iterator finish=collection->end();
  for(Vector::iterator current=collection->begin();current!=finish;++current) {
   action.invoke(action.context,*current);
   (*current)->visit(action);
  }
 }
}
