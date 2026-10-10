// from server: 82% by colin
// roc 2007-08 00773140  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773140

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_58dc90();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

struct S {
    void f();
};

void S::f() {
    int local;
    sub_725520(0x58de30, 0x8c37ec);
    local = sub_58dc90();
    int* p = &local;
    int r = sub_407410(p);
    sub_4339d0();
    *(int*)r = 0x8a4538;
    sub_630d23(0x77ab40);
}
