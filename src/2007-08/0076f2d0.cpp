// from server: 76% by colin
// roc 2007-08 0076f2d0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f2d0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_498d00();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern int g_8be2f4;
extern int g_498d80;
extern int g_7786d0;
extern int g_88f6c4;

void __cdecl sub_76f2d0()
{
    int local;
    void* p;

    sub_725520(&g_8be2f4, &g_498d80);
    local = (int)sub_498d00();
    p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_88f6c4;
    sub_630d23(&g_7786d0, (void*)0x88f6c4);
}
