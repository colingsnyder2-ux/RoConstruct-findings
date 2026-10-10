// from server: 82% by colin
// roc 2007-08 0076cc10  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cc10

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_41fdc0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

extern void* g_8bb4c8;
extern void* g_420670;
extern void* g_777840;
extern void* g_88635c;

void __cdecl sub_76cc10()
{
    void* p;
    sub_725520(&g_8bb4c8, &g_420670);
    p = sub_41fdc0();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = &g_88635c;
    sub_630d23(&g_777840);
}
