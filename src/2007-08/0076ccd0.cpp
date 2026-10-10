// from server: 83% by colin
// roc 2007-08 0076ccd0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ccd0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_41ff40();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern void* g_8bb4d4;
extern void* g_4206a0;
extern void* g_777780;
extern void* g_886368;

void __cdecl sub_76ccd0()
{
    void* p;
    sub_725520(&g_8bb4d4, &g_4206a0);
    p = sub_41ff40();
    void* q = sub_407410(&p);
    void* r = sub_4339d0();
    *(void**)r = &g_886368;
    sub_630d23(r, &g_777780);
}
