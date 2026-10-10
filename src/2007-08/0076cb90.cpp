// from server: 81% by colin
// roc 2007-08 0076cb90  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cb90

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_41bfd0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct S {
    void f();
};

void S::f() {
    sub_725520((const char*)0x8bb488, (const char*)0x41c130);
    void* p = sub_41bfd0();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x884a54;
    sub_630d23((void*)0x777590);
}
