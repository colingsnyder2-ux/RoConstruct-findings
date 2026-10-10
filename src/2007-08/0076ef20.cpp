// from server: 78% by colin
// roc 2007-08 0076ef20  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ef20

extern "C" int __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4871f0();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" int __cdecl sub_630d23(int, int);

extern int g_8bdcbc;
extern int g_4879b0;
extern int g_778180;
extern int g_88e320;

int __cdecl sub_76ef20()
{
    int local;
    int* p;

    sub_725520((int)&g_8bdcbc, (int)&g_4879b0);
    local = sub_4871f0();
    p = (int*)sub_407410(&local);
    sub_4339d0();
    *p = (int)&g_88e320;
    sub_630d23((int)&g_778180, 0);
    return 0;
}
