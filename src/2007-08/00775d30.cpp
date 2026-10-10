// from server: 81% by colin
// roc 2007-08 00775d30  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775d30

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_5f0770();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8c77fc, 0x5f0c70);
    int v = sub_5f0770();
    void* p = sub_407410(&v);
    sub_4339d0();
    *(int*)p = 0x8b3ad0;
    sub_630d23(0x77c620);
}
