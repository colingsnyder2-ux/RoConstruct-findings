// from server: 82% by colin
extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4a5a70();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

extern int g_8be974;
extern int g_4a71a0;
extern int g_7789e0;
extern int g_892ab4;

void __cdecl sub_76fa20()
{
    int local;
    sub_725520((int)&g_8be974, (int)&g_4a71a0);
    local = sub_4a5a70();
    int* p = (int*)sub_407410(&local);
    sub_4339d0();
    *p = (int)&g_892ab4;
    sub_630d23((int)&g_7789e0);
}
