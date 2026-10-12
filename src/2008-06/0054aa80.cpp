// from server: 26% by colin
struct SubA {
    void f();
};

struct SubB {
    void f();
};

struct SubC {
    void f();
};

struct S {
    char pad0[0xc];
    SubB subB;
    char pad1[0xc];
    SubC subC;
    char pad2[0xc];
    SubA subA;
    void f();
};

void S::f()
{
    subA.f();
    subC.f();
    subB.f();
    subB.f();
}
