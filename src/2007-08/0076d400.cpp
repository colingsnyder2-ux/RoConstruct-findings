// from server: 81% by colin
// roc 2007-08 0076d400  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d400

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_4580f0();
extern "C" void* __cdecl sub_407410(void**);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

void __cdecl sub_76d400()
{
    void* p;
    sub_725520((const char*)0x8bbfcc, (const char*)0x458660);
    p = sub_4580f0();
    void* obj = sub_407410(&p);
    sub_4339d0();
    *(void**)obj = (void*)0x88a474;
    sub_630d23((void*)0x777e80);
}
