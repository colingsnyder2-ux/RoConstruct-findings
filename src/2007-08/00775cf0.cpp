// from server: 81% by colin
extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_5F0700();
extern "C" void* __cdecl sub_407410(void**);
extern "C" void __cdecl sub_4339D0();
extern "C" void __cdecl sub_630D23(void*);

extern void* dword_8B3ACC;

void sub_775CF0()
{
    void* p;
    sub_725520((void*)0x8C77F8, (void*)0x5F0C60);
    p = sub_5F0700();
    void* q = sub_407410(&p);
    sub_4339D0();
    *(void**)q = (void*)0x8B3ACC;
    sub_630D23((void*)0x77C660);
}
