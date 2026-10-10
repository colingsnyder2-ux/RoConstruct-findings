// from server: 85% by tester
struct S_00775cf0 {
    void m();
};

extern "C" void __stdcall sub_00725520(void*, void*);
extern "C" void* __cdecl sub_005f0700();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void* __fastcall sub_004339d0(void*);
extern "C" void __stdcall sub_00630d23(void*);

void S_00775cf0::m()
{
    sub_00725520((void*)0x8c77f8, (void*)0x5f0c60);
    void* p = sub_005f0700();
    void* q = sub_00407410(&p);
    void* r = sub_004339d0(q);
    *(unsigned int*)r = 0x8b3acc;
    sub_00630d23((void*)0x77c660);
}
