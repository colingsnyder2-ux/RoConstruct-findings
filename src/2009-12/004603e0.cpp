// from server: 9% by atomic.potato
struct Sub {
    char pad[0x58];
    void f();
};

struct S {
    char pad[0x58];
    Sub sub;
    void f();
};

void Sub::f() {}

extern "C" void __stdcall g1();
extern "C" void __stdcall g2();

void S::f() {
    sub.f();
    g2();
}
