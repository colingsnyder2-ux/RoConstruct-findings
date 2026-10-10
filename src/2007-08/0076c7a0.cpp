// from server: 81% by colin
// roc 2007-08 0076c7a0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c7a0

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __cdecl sub_40cd80();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void* __stdcall sub_4339d0(void*);
extern "C" void __stdcall sub_630d23(void*);

extern void* g_8baf84;
extern void* g_40d280;
extern void* g_777360;
extern void* g_8824c4;

void __stdcall sub_76c7a0()
{
    void* p;
    sub_725520(&g_8baf84, &g_40d280);
    p = sub_40cd80();
    void* q = sub_407410(&p);
    void* r = sub_4339d0(q);
    *(void**)r = &g_8824c4;
    sub_630d23(&g_777360);
}
