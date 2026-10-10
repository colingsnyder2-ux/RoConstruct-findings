// from server: 82% by colin
// roc 2007-08 0076ef60  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ef60

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_487270();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern void* g_8bdcc0;
extern void* g_4879c0;
extern void* g_778140;
extern void* g_88e324;

void __cdecl sub_76ef60()
{
    void* p;
    sub_725520(&g_8bdcc0, &g_4879c0);
    p = sub_487270();
    void* q = sub_407410(&p);
    q = sub_4339d0();
    *(void**)q = &g_88e324;
    sub_630d23(&g_778140, q);
}
