// from server: 99% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_ce6c1982577bcc6d.cpp

// Candidate translation unit (score above; library headers required).



#include <boost/shared_ptr.hpp>
struct Thing;
typedef boost::shared_ptr<Thing> Shared;
Shared __cdecl convert(const Shared&);

struct Node {
    Shared value;
    unsigned char storage[72];

    Node(Shared);
};

struct Iterator {
    void* node;
    bool operator==(const Iterator& o) const { return node == o.node; }
};

struct Header {
    unsigned long unused;
    void* end;
    unsigned long remaining;
};

struct Search {
    unsigned char storage[5];
    unsigned char flag1;
    unsigned char flag2;

    void find(Iterator*, const Shared*, unsigned char*, unsigned char*);
    inline void doInsert(Iterator*, const Node&);
};

struct Tree : Header, Search {
    void insert(Iterator*, const Node&);
    Iterator endIt() { Iterator i; i.node = end; return i; }
};

inline void Search::doInsert(Iterator* it, const Node& n) { static_cast<Tree*>(this)->insert(it, n); }

struct S {
    unsigned long unused;
    Tree tree;

    void f(Shared);
};

void S::f(Shared argument)
{
    Shared value = convert(argument);
    Tree* t = &tree;
    Search* search = t;
    Iterator position;

    search->find(&position, &value, &search->flag1, &search->flag2);

    if (position == static_cast<Tree*>(search)->endIt())
        search->doInsert(&position, Node(value));
}
