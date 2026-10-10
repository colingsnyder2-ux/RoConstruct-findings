// from server: 82% by colin
extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_438fa0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

extern int g_8bb980;
extern int g_439840;
extern int g_7779e0;
extern int g_887ea8;

void __cdecl sub_76cec0()
{
    sub_725520((int)&g_8bb980, (int)&g_439840);
    int v = sub_438fa0();
    void* p = sub_407410(&v);
    sub_4339d0();
    *(int*)p = (int)&g_887ea8;
    sub_630d23((int)&g_7779e0);
}
