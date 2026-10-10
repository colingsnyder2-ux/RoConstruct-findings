// from server: 80% by colin
// roc 2007-08 0076eca0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eca0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" int __cdecl sub_486cf0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern int g_8bdc94;
extern int g_487910;
extern int g_778400;
extern int g_88e2f8;

void __cdecl sub_76eca0()
{
    int local;
    sub_725520(&g_8bdc94, &g_487910);
    local = sub_486cf0();
    void* p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_88e2f8;
    sub_630d23(&g_778400, (void*)0);
}
