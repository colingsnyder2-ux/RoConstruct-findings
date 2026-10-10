// from server: 75% by colin
// roc 2007-08 007730c0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007730c0

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_58dbb0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8c37e4, 0x58de10);
    int v = sub_58dbb0();
    int* p = &v;
    int r = sub_407410(p);
    sub_4339d0();
    *(int*)r = 0x8a4530;
    sub_630d23(0x77abc0, 0);
}
