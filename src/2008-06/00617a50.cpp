// from server: 44% by colin



struct Node {
    unsigned char padding[12];
    unsigned int value;
};

struct Tree {
    unsigned char padding[24];
    Node* sentinel;
};

struct Iterator {
    Tree* owner;
    Node* node;
    Iterator(Tree* o, Node* n) : owner(o), node(n) {}
};

struct Output {
    unsigned char value;
    Output() : value(0) {}
};

struct Predicate {
    char storage[24];
    int get(int);
};

extern Output __cdecl difference1(
    Iterator, Iterator, Iterator, Iterator, int, Output);
extern Output __cdecl difference2(
    Iterator, Iterator, Iterator, Iterator, int, Output);

struct Tree2 {
    void* owner;
    char padding[20];
    Node* sentinel;
    Iterator erase(Iterator first, Iterator last);
    Tree2& assign(const Tree2& other);
};

struct S {
    char padding[28];
    Predicate predicate;
    Tree2 tree;

    void f(Tree2* other);
};

void S::f(Tree2* other)
{
    Predicate* p = &predicate;
    int compare = p->get(1);
    Tree2* t = &tree;

    difference1(
        Iterator((Tree*)other->owner, other->sentinel),
        Iterator((Tree*)other->owner, other->sentinel),
        Iterator((Tree*)t->owner, t->sentinel),
        Iterator((Tree*)t->owner, t->sentinel),
        compare, Output());

    compare = p->get(1);

    difference2(
        Iterator((Tree*)t->owner, t->sentinel),
        Iterator((Tree*)t->owner, t->sentinel),
        Iterator((Tree*)other->owner, other->sentinel),
        Iterator((Tree*)other->owner, other->sentinel),
        compare, Output());

    if (t != other) {
        t->erase(
            Iterator((Tree*)t->owner, t->sentinel),
            Iterator((Tree*)t->owner, t->sentinel));
        t->assign(*other);
    }
}
