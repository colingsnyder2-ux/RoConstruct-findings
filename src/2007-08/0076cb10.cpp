// from server: 83% by colin
// roc 2007-08 0076cb10  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cb10

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_41bed0();
extern "C" void* __cdecl sub_407410(void**);
extern "C" void* __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

extern char g_8bb480;
extern char g_41c110;
extern char g_777610;
extern int g_884a4c;

void __cdecl sub_76cb10()
{
    void* p;
    sub_725520(&g_8bb480, &g_41c110);
    p = sub_41bed0();
    void* q = sub_407410(&p);
    void* r = sub_4339d0();
    *(int*)r = (int)&g_884a4c;
    sub_630d23(r, &g_777610);
}
