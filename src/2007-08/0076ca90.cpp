// from server: 79% by colin
// roc 2007-08 0076ca90  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ca90

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_413970();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(void*, void*);

extern void* g_8bb218;
extern void* g_414210;
extern void* g_777550;
extern void* g_8846b8;

void __stdcall sub_76ca90()
{
    void* p;
    sub_725520(&g_8bb218, &g_414210);
    p = sub_413970();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = &g_8846b8;
    sub_630d23(&g_777550, q);
}
