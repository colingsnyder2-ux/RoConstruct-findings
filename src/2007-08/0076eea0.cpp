// from server: 81% by tester
// roc 2007-08 0076eea0  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eea0

extern "C" int __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4870f0();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_630d23(int);
extern "C" int __cdecl sub_4339d0();

struct S {
    void f();
};

void S::f() {
    int local;
    sub_725520(0x8bdcb4, 0x487990);
    local = sub_4870f0();
    int* p = &local;
    int r = sub_407410(p);
    sub_4339d0();
    *(int*)r = 0x88e318;
    sub_630d23(0x778200);
}
