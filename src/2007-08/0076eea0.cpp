// from server: 80% by colin
// roc 2007-08 0076eea0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eea0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" int __cdecl sub_4870f0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern int g_8bdcb4;
extern int g_487990;
extern int g_778200;
extern int g_88e318;

void __cdecl sub_76eea0()
{
    int local;
    sub_725520(&g_8bdcb4, &g_487990);
    local = sub_4870f0();
    void* p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_88e318;
    sub_630d23(p, &g_778200);
}
