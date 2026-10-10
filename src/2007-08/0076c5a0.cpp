// from server: 77% by colin
// roc 2007-08 0076c5a0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c5a0

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_402520();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void* __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(void*);

extern void* g_8baeb8;
extern void* g_403580;
extern void* g_7772d0;
extern void* g_88135c;

void __stdcall sub_76c5a0()
{
    void* p;
    sub_725520(&g_8baeb8, &g_403580);
    p = sub_402520();
    void* q = sub_407410(&p);
    void* r = sub_4339d0();
    *(void**)r = &g_88135c;
    sub_630d23(&g_7772d0);
}
