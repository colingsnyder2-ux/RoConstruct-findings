// from server: 82% by colin
// roc 2007-08 0076f960  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f960

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4a58f0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

extern int g_8be968;
extern int g_4a7170;
extern int g_778aa0;
extern int g_892aa8;

void __cdecl sub_76f960()
{
    int local;
    void* p;

    sub_725520((int)&g_8be968, (int)&g_4a7170);
    local = sub_4a58f0();
    p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_892aa8;
    sub_630d23((int)&g_778aa0);
}
