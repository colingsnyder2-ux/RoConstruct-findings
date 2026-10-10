// from server: 82% by colin
// roc 2007-08 0076ed20  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ed20

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_486df0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern void* g_8bdc9c;
extern void* g_487930;
extern void* g_778380;
extern void* g_88e300;

void __cdecl sub_76ed20()
{
    void* p;
    void* q;

    sub_725520(&g_8bdc9c, &g_487930);
    p = sub_486df0();
    q = sub_407410(&p);
    q = sub_4339d0();
    *(void**)q = &g_88e300;
    sub_630d23(&g_778380, q);
}
