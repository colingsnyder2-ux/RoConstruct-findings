// from server: 79% by colin
struct S_00775c30 {
    void f();
};

extern "C" void __stdcall sub_00725520(void*, void*);
extern "C" void* __stdcall sub_005f05b0();
extern "C" void* __stdcall sub_00407410(void*);
extern "C" void __stdcall sub_004339d0(void*);
extern "C" void __stdcall sub_00630d23(void*);

void S_00775c30::f()
{
    void* p;
    sub_00725520((void*)0x8c77ec, (void*)0x5f0c30);
    p = sub_005f05b0();
    void* q = sub_00407410(&p);
    sub_004339d0(q);
    *(void**)q = (void*)0x8b3ac0;
    sub_00630d23((void*)0x77c720);
}
