// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_jointinit_4e3b6c79de4e198c.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <boost/bind.hpp>
extern "C" __declspec(dllimport) void __cdecl invalid_parameter_noinfo();
struct Object;
typedef boost::shared_ptr<Object> Shared;

struct Connection {
    char data[16];
    void disconnect();
};

struct Signal {
    void set(int);
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    Signal* signal;
    unsigned int padding;
    Connection first;
    Connection second;
    unsigned char active;
    unsigned char tail[4];
    unsigned char nil;
};

struct Tree;
struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
};

struct Tree {
    Owner* owner;
    char padding[20];
    Node* head;
    Iterator find(unsigned int*);
    Iterator* erase(Iterator*, Iterator);
};

#pragma pointers_to_members(full_generality, multiple_inheritance)
struct S;
struct Object {
    template<class F> void connect(F);
};

struct S {
    char padding[0x2c38];
    Tree tree;
    bool remove(Shared);
};

bool S::remove(Shared value) {
    if (!value.get())
        return false;

    unsigned int key = reinterpret_cast<unsigned int>(value.get());
    Tree* t = &tree;
    Iterator position = t->find(&key);

    Owner* owner = position.owner;
    Node* end = t->head;
    Owner* expected = t->owner;
    if (!owner || owner != expected)
        invalid_parameter_noinfo();

    Node* node = position.node;
    if (node == end)
        return false;

    value->connect(boost::bind(&S::remove, this, _1));

    if (!owner)
        invalid_parameter_noinfo();
    Tree* ownerTree = owner ? owner->tree : 0;
    if (node == ownerTree->head)
        invalid_parameter_noinfo();

    node->first.disconnect();
    node->second.disconnect();
    if (node->active)
        node->signal->set(0);

    Iterator current;
    current.owner = owner;
    current.node = node;
    t->erase(&position, current);
    return true;
}