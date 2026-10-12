// from server: 93% by king_originala
struct Empty1 {
    Empty1();
};

struct Empty2 {
    Empty2();
};

inline Empty1::Empty1() {}
inline Empty2::Empty2() {}

struct A {
    int unused;
    int first;
    int second;
    int third;
    int fourth;

    A();
    ~A();
};

struct B {
    int value;

    B();
    ~B();
};

struct C {
    C(const Empty1 &, const Empty2 &);
};

struct S {
    A a;
    B b;
    C c;

    S();
};

inline A::A()
{
    first = 0;
    second = 0;
    third = 0;
    fourth = 0;
}

inline B::B()
    : value(0)
{
}

S::S()
    : a(), b(), c(Empty1(), Empty2())
{
}
