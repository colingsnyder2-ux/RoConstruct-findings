// from server: 81% by colin
extern "C" void __stdcall sub_725520(int, int);
extern "C" int __stdcall sub_486e70();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(int);

extern int g_8bdca0;
extern int g_487940;
extern int g_778340;
extern int g_88e304;

void __stdcall sub_76ed60()
{
    int local;
    void* p;

    sub_725520((int)&g_8bdca0, (int)&g_487940);
    local = sub_486e70();
    p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_88e304;
    sub_630d23((int)&g_778340);
}
