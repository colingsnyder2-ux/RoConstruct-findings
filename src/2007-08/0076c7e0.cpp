// from server: 76% by colin
// roc 2007-08 0076c7e0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c7e0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" int __cdecl sub_40ed00();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern int g_8bafa0;
extern int g_40edc0;
extern int g_7773e0;
extern int g_88261c;

void __cdecl sub_76c7e0()
{
    int local;
    sub_725520(&g_8bafa0, &g_40edc0);
    local = sub_40ed00();
    void* p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_88261c;
    sub_630d23(&g_7773e0, (void*)0x40edc0);
}
