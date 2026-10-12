// from server: 78% by king_originala
#pragma optimize("", off)

struct B {
    int value;
    B();
    B(const B&);
    int *allocate(unsigned int);
};

struct Base {
    char pad[8];
    B allocator;
    int *first;
    int *last;
    int *end;

    Base(B);
    ~Base();
};

struct S : Base {
    S();
    bool f(unsigned int);
};

S::S() : Base(B()) {
    f(0);
}
