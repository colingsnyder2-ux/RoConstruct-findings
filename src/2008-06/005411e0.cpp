// from server: 77% by king_originala
#pragma optimize("g", off)

struct B {
    char pad[4];
    void f();
};

struct S {
    char pad[8];
    B b;
    ~S();
};

struct M {
    ~M();
};

struct T : S {
    M m;
    ~T();
};

T::~T()
{
}
