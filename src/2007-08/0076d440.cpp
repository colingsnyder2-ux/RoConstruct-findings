// from server: 81% by colin
// roc 2007-08 0076d440  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d440

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_4581f0();
extern "C" void* __cdecl sub_407410(void**);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct ScintillaCtrl {
    void* vtable;
};

void* g_88a478 = (void*)0x88a478;
void* g_777e40 = (void*)0x777e40;

void sub_76d440()
{
    sub_725520((const char*)0x8bbfd4, (const char*)0x458680);
    void* p = sub_4581f0();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x88a478;
    sub_630d23((void*)0x777e40);
}
