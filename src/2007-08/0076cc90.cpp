// from server: 81% by colin
// roc 2007-08 0076cc90  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cc90

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_41fec0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct S {
    void f();
};

void S::f() {
    void* p;
    sub_725520((void*)0x8bb4d0, (void*)0x420690);
    p = sub_41fec0();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x886364;
    sub_630d23((void*)0x7777c0);
}
