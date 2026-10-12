// from server: 78% by king_originala
struct A {
    unsigned int value;
    A(const A&);
};

struct B {
    unsigned int data[2];
    B(A);
};

struct S : B {
    A member;
    S(A);
};

#pragma optimize("", off)
S::S(A a) : B(a), member(a)
{
}
