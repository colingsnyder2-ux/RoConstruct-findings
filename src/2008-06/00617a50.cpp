// from server: 39% by king_originala
struct Iterator {
    void* owner;
    void* node;
    Iterator(void* o, void* n) : owner(o), node(n) {}
};

struct Output {
    unsigned char value;
    Output() : value(0) {}
};

struct Tree {
    void* owner;
    char padding[20];
    void** sentinel;

    Iterator erase(Iterator first, Iterator last);
    Tree& assign(const Tree& other);
};

struct Predicate {
    char storage[24];
    int get(int);
};

extern Output __cdecl difference1(
    Iterator, Iterator, Iterator, Iterator, int, Output);
extern Output __cdecl difference2(
    Iterator, Iterator, Iterator, Iterator, int, Output);

struct S {
    char padding[28];
    Predicate predicate;
    Tree tree;

    void f(Tree* other);
};

void S::f(Tree* other)
{
    Predicate* p = &predicate;
    int compare = p->get(1);
    Tree* t = &tree;

    difference1(
        Iterator(other->owner, *other->sentinel),
        Iterator(other->owner, other->sentinel),
        Iterator(t->owner, *t->sentinel),
        Iterator(t->owner, t->sentinel),
        compare, Output());

    compare = p->get(1);

    difference2(
        Iterator(t->owner, *t->sentinel),
        Iterator(t->owner, t->sentinel),
        Iterator(other->owner, *other->sentinel),
        Iterator(other->owner, other->sentinel),
        compare, Output());

    if (t != other) {
        t->erase(
            Iterator(t->owner, *t->sentinel),
            Iterator(t->owner, t->sentinel));
        t->assign(*other);
    }
}
