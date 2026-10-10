// from server: 73% by colin
struct S {
    void f();
};

extern "C" void __cdecl sub_008BB47C();
extern "C" void __cdecl sub_0041C100();
extern "C" void __cdecl sub_00725520();
extern "C" void* __cdecl sub_0041BE50();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_004339D0();
extern "C" void __cdecl sub_00630D23();

void S::f()
{
    sub_008BB47C();
    sub_0041C100();
    sub_00725520();
    void* p = sub_0041BE50();
    void* q = sub_00407410(&p);
    sub_004339D0();
    *(void**)q = (void*)0x884A48;
    sub_00630D23();
}
