// from server: 78% by colin
// roc 2007-08 00775cb0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775cb0

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_5f0690();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8c77f4, 0x5f0c50);
    int v = sub_5f0690();
    int* p = &v;
    int r = sub_407410(p);
    int q = sub_4339d0();
    *(int*)q = 0x8b3ac8;
    sub_630d23(0x77c6a0, 0);
}
