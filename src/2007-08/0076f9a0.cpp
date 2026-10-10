// from server: 81% by colin
extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_4a5970();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(void*);

extern void* g_8be96c;
extern void* g_4a7180;
extern void* g_778a60;
extern void* g_892aac;

void __stdcall sub_76f9a0()
{
    void* p;
    sub_725520(&g_8be96c, &g_4a7180);
    p = sub_4a5970();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = &g_892aac;
    sub_630d23(&g_778a60);
}
