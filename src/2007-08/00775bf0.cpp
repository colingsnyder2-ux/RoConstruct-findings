// from server: 79% by colin
extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_5f0540();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0(void*);
extern "C" void __cdecl sub_630d23(void*);

struct S {
    void f();
};

void S::f() {
    sub_725520((void*)0x8c77e8, (void*)0x5f0c20);
    void* p = sub_5f0540();
    void* q = sub_407410(&p);
    sub_4339d0(q);
    *(void**)q = (void*)0x8b3abc;
    sub_630d23((void*)0x77c760);
}
