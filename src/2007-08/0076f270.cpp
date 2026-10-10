// from server: 82% by colin
// roc 2007-08 0076f270  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f270

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" int __cdecl sub_491810();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

extern int g_8bdfa4;
extern int g_492080;
extern int g_7785f0;
extern int g_88f5ac;

void __cdecl sub_76f270()
{
    int local;
    void* p;

    sub_725520(&g_8bdfa4, &g_492080);
    local = sub_491810();
    p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_88f5ac;
    sub_630d23(&g_7785f0);
}
