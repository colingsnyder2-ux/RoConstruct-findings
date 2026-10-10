// from server: 77% by colin
// roc 2007-08 00772f40  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772f40

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_58d910();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8c37cc, 0x58ddb0);
    int v = sub_58d910();
    int* p = &v;
    int r = sub_407410(p);
    int q = sub_4339d0();
    *(int*)q = 0x8a4518;
    sub_630d23(0x77ad40, q);
}
