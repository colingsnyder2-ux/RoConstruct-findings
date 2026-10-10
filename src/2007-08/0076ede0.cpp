// from server: 81% by colin
// roc 2007-08 0076ede0  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ede0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_486f70();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct S {
    void f();
};

void S::f()
{
    sub_725520((void*)0x8bdca8, (void*)0x487960);
    void* p = sub_486f70();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(unsigned int*)q = 0x88e30c;
    sub_630d23((void*)0x7782c0);
}
