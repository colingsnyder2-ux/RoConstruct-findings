// from server: 80% by colin
// roc 2007-08 0076fc50  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fc50

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_4cd600();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern int g_8bf9d8;
extern int g_4cd760;
extern int g_778be0;
extern int g_896c44;

void __cdecl sub_76fc50()
{
    int local;
    void* p;

    sub_725520(&g_8bf9d8, &g_4cd760);
    p = sub_4cd600();
    local = (int)p;
    p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = (int)&g_896c44;
    sub_630d23(&g_778be0, (void*)8);
}
