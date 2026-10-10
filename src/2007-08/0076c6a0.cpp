// from server: 77% by colin
// roc 2007-08 0076c6a0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c6a0

extern "C" void __cdecl sub_00725520(void* a, void* b);
extern "C" void* __cdecl sub_00402720();
extern "C" void* __cdecl sub_00407410(void* a);
extern "C" void* __cdecl sub_004339d0(void* a);
extern "C" void __cdecl sub_00630d23(void* a);

void __cdecl sub_0076c6a0()
{
    void* p;
    void* q;
    void* r;

    sub_00725520((void*)0x8baec8, (void*)0x4035c0);
    p = sub_00402720();
    q = sub_00407410(&p);
    r = sub_004339d0(q);
    *(void**)r = (void*)0x88136c;
    sub_00630d23((void*)0x7771d0);
}
