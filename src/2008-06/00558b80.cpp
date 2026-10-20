// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_collectnativeconversion304f9a744532fcb8.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
struct Node {Node* next;};
struct Result {char prefix[4];Node* first;Node* last;};
struct Context {char prefix[8];};
struct Item {Node* process(Context*,int);};
struct State {char prefix[8];std::vector<Item*> items;};
struct Prefix {char prefix[20];};
struct Object:Prefix,Context {State* state;void collect(Result*);};
inline Context* asContext(Object*);
void Object::collect(Result* result){for(std::vector<Item*>::iterator it=state->items.begin();it!=state->items.end();++it){Node* node=(*it)->process(asContext(this),0);if(node){if(!result->last)result->first=node;else result->last->next=node;result->last=node;}}}

inline Context* asContext(Object* o){return o;}
