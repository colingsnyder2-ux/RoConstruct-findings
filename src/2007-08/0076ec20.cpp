// from server: 82% by colin
extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_486bf0();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" int __cdecl sub_630d23(int);

extern int g_8bdc8c;
extern int g_4878f0;
extern int g_778480;
extern int g_88e2f0;

void __cdecl sub_76ec20()
{
    int local;
    int* p;

    sub_725520((int)&g_8bdc8c, (int)&g_4878f0);
    local = sub_486bf0();
    p = (int*)sub_407410(&local);
    p = (int*)sub_4339d0();
    *p = (int)&g_88e2f0;
    sub_630d23((int)&g_778480);
}
