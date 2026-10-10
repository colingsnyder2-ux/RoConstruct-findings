// from server: 77% by colin
// roc 2007-08 00775d70  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775d70

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" int __cdecl sub_5f07e0();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

struct S {
    void f();
};

void S::f() {
    int local;
    sub_725520((const char*)0x8c7800, (const char*)0x5f0c80);
    local = sub_5f07e0();
    int* p = &local;
    int r = sub_407410(p);
    int v = sub_4339d0();
    *(int*)v = 0x8b3ad4;
    sub_630d23(0x77c5e0, v);
}
