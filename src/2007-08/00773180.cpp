// from server: 79% by colin
// roc 2007-08 00773180  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773180

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_58dd00();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

struct S {
    void f();
};

void S::f() {
    sub_725520((void*)0x8c37f0, (void*)0x58de40);
    void* p = sub_58dd00();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x8a453c;
    sub_630d23((void*)0x77ab00, q);
}
