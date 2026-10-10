// from server: 82% by colin
// roc 2007-08 0076cb50  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cb50

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_41bf50();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

extern void* g_8bb484;
extern void* g_41c120;
extern void* g_7775d0;
extern void* g_884a50;

void __cdecl sub_76cb50()
{
    void* p;
    sub_725520(&g_8bb484, &g_41c120);
    p = sub_41bf50();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = &g_884a50;
    sub_630d23(&g_7775d0);
}
