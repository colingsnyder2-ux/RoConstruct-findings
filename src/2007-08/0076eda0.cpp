// from server: 79% by colin
// roc 2007-08 0076eda0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eda0

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_486ef0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

extern int g_8bdca4;
extern int g_487950;
extern int g_778300;
extern int g_88e308;

void __cdecl sub_76eda0()
{
    int local;
    int* p;

    sub_725520((int)&g_8bdca4, (int)&g_487950);
    local = sub_486ef0();
    p = (int*)sub_407410(&local);
    sub_4339d0();
    *p = (int)&g_88e308;
    sub_630d23((int)&g_778300, (int)p);
}
