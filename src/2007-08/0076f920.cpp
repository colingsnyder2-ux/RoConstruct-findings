// from server: 82% by colin
// roc 2007-08 0076f920  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f920

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4a5870();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

extern int g_8be964;
extern int g_4a7160;
extern int g_778ae0;
extern int g_892aa4;

void __cdecl sub_76f920()
{
    int local;
    void* p;

    sub_725520((int)&g_8be964, (int)&g_4a7160);
    local = sub_4a5870();
    p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_892aa4;
    sub_630d23((int)&g_778ae0);
}
