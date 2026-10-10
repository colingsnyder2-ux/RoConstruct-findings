// from server: 80% by colin
// roc 2007-08 00772ec0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772ec0

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_58d830();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0(int);
extern "C" void __cdecl sub_630d23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8c37c4, 0x58dd90);
    int v = sub_58d830();
    int r = sub_407410(&v);
    r = sub_4339d0(r);
    *(int*)r = 0x8a4510;
    sub_630d23(0x77adc0, 0x8a4510);
}
