// from server: 99% by king_originala
struct I0 { virtual void f(); char padding[12]; };
struct I1 { virtual void f(); };
struct I2 { virtual void f(); char padding[8]; };
struct I3 { virtual void f(); };
struct I4 { virtual void f(); char padding[28]; };
struct I5 { virtual void f(); char padding[28]; };
struct I6 { virtual void f(); char padding[28]; };
struct I7 { virtual void f(); char padding[28]; };
struct I8 { virtual void f(); char padding[28]; };
struct I9 { virtual void f(); char padding[104]; };

struct Base : I0, I1, I2, I3, I4, I5, I6, I7, I8, I9 {
    Base();
    ~Base();
};

struct Member {
    char storage[0x2A24];
    Member();
    ~Member();
};

struct Tag1 {
    Tag1();
};

struct Tag2 {
    Tag2();
};

inline Tag1::Tag1() {}
inline Tag2::Tag2() {}

struct Tail {
    Tail(const Tag1&, const Tag2&);
    ~Tail();
};

struct S : Base {
    Member member;
    Tail tail;
    virtual void f();
    S();
};

S::S() : Base(), member(), tail(Tag1(), Tag2())
{
}
