// from server: 82% by colin
// roc 2007-08 0076cde0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cde0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_42f680();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern void* g_8bb92c;
extern void* g_430dc0;
extern void* g_7778f0;
extern void* g_886ed0;

void __cdecl sub_76cde0()
{
    void* p;
    sub_725520(&g_8bb92c, &g_430dc0);
    p = sub_42f680();
    void* q = sub_407410(&p);
    void* r = sub_4339d0();
    *(void**)r = &g_886ed0;
    sub_630d23(&g_7778f0, r);
}
