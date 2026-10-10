// from server: 72% by colin
// roc 2007-08 00775db0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775db0

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_5f0850();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8c7804, 0x5f0c90);
    int v = sub_5f0850();
    int* p = &v;
    int r = sub_407410(p);
    sub_4339d0();
    *(int*)r = 0x8b3ad8;
    sub_630d23(0x77c5a0, 0x8b3ad8);
}
