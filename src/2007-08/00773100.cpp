// from server: 81% by colin
// roc 2007-08 00773100  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773100

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_58dc20();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct S {
    void f();
};

void S::f() {
    void* p;
    sub_725520((void*)0x8c37e8, (void*)0x58de20);
    p = sub_58dc20();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x8a4534;
    sub_630d23((void*)0x77ab80);
}
