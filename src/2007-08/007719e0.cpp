// from server: 81% by colin
// roc 2007-08 007719e0  size: 63 bytes

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_55e630();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_630d23(int);
extern "C" void __cdecl sub_4339d0();

struct S {
    void f();
};

void S::f()
{
    sub_725520(0x8c231c, 0x55ed40);
    int v = sub_55e630();
    void* p = sub_407410(&v);
    sub_4339d0();
    *(int*)p = 0x89f378;
    sub_630d23(0x779d80);
}
