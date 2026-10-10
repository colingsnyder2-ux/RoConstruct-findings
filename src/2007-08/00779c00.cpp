// from server: 78% by colin
extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_557780();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_407220(void*);

extern void* g_89ebc8;
extern void* g_7a8a30;

void sub_779c00()
{
    sub_725520((void*)0x8c1f10, (void*)0x5586f0);
    g_89ebc8 = &g_7a8a30;
    void* p = sub_557780();
    void* q = sub_407410(&p);
    sub_407220(q);
}
