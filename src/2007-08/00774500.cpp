// from server: 92% by tester
struct S {
    void f();
};

extern "C" void* __stdcall sub_005B6D50(int, void*, void*);
extern "C" void* __stdcall sub_00577100(void*);
extern "C" void __stdcall sub_005873E0(void*, void*);
extern "C" void __cdecl sub_00630D23(void*);

void S::f()
{
    void* p1 = sub_005B6D50(0, (void*)0x79B698, (void*)0x7AA098);
    void* p2 = sub_00577100(p1);
    sub_005873E0((void*)0x8C6454, p2);
    *(unsigned int*)0x8C6454 = 0x7B86C4;
    sub_00630D23((void*)0x77B880);
}
