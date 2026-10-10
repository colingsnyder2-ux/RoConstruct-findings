// from server: 81% by colin
struct S_00772f00 {
    void f();
};

extern "C" void __cdecl sub_00725520(int, int);
extern "C" void* __cdecl sub_0058d8a0();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_004339d0();
extern "C" void __cdecl sub_00630d23(int);

void S_00772f00::f()
{
    sub_00725520(0x8c37c8, 0x58dda0);
    void* p = sub_0058d8a0();
    void* q = sub_00407410(&p);
    sub_004339d0();
    *(int*)q = 0x8a4514;
    sub_00630d23(0x77ad80);
}
