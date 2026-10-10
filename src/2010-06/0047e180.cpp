// from server: 24% by colin
struct Sub1 {
    void f();
};

struct Sub2 {
    void f();
};

struct S {
    char pad0[4];
    Sub1 sub1;
    char pad1[0x20];
    Sub2 sub2;
    void target();
};

void S::target()
{
    sub2.f();
    sub1.f();
}
