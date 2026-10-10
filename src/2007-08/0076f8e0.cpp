// from server: 82% by colin
// roc 2007-08 0076f8e0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f8e0

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4a57f0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

extern int g_8be960;
extern int g_4a7150;
extern int g_778b20;
extern int g_892aa0;

void __cdecl sub_76f8e0()
{
    int local;
    sub_725520((int)&g_8be960, (int)&g_4a7150);
    local = sub_4a57f0();
    int* p = (int*)sub_407410(&local);
    sub_4339d0();
    *p = (int)&g_892aa0;
    sub_630d23((int)&g_778b20);
}
