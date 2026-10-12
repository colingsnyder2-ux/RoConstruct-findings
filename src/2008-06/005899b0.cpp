// from server: 95% by king_originala
struct Ref {
    void* value;
    Ref& operator=(const Ref&);
};

struct Node {
    Node* left;
};

struct Iterator {
    void* owner;
    Node* node;
};

struct Tree {
    void* owner;
    unsigned char padding[20];
    Node* head;

    Iterator* erase(Iterator*, void*, Node*, void*, Node*);
    void copy(const Tree&);
};

struct S {
    unsigned int a;
    unsigned int b;
    Ref c;
    unsigned int d;
    unsigned int e;
    Ref f;
    Tree tree;

    S& operator=(const S&);
};

S& S::operator=(const S& other)
{
    a = other.a;
    b = other.b;
    c = other.c;
    d = other.d;
    e = other.e;
    f = other.f;

    const Tree* source = &other.tree;
    Tree* destination = &tree;
    if (destination != source) {
        Iterator result;
        destination->erase(&result, destination->owner,
                           destination->head->left,
                           destination->owner, destination->head);
        destination->copy(*source);
    }
    return *this;
}
