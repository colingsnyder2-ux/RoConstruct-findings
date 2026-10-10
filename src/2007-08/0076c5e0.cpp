// from server: 82% by colin
// roc 2007-08 0076c5e0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c5e0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_4025a0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern void* g_8baebc;
extern void* g_403590;
extern void* g_777290;
extern void* g_881360;

void __cdecl sub_76c5e0()
{
    void* p;
    sub_725520(&g_8baebc, &g_403590);
    p = sub_4025a0();
    void* q = sub_407410(&p);
    void* r = sub_4339d0();
    *(void**)r = &g_881360;
    sub_630d23(&g_777290, r);
}
