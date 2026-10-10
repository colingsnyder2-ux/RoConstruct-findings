// from server: 82% by colin
struct S_0076f9e0 {
    void f();
};

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_4a59f0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

void S_0076f9e0::f()
{
    int local;
    sub_725520(0x4a7190, 0x8be970);
    local = sub_4a59f0();
    int* p = (int*)sub_407410(&local);
    sub_4339d0();
    *p = 0x892ab0;
    sub_630d23(0x778a20);
}
