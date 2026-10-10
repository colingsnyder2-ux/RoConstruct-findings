// from server: 81% by colin
// roc 2007-08 00771a20  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771a20

extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0055e6a0();
extern "C" int __cdecl sub_00407410(int*);
extern "C" void __cdecl sub_004339d0();
extern "C" void __cdecl sub_00630d23(int);

struct S {
    void f();
};

void S::f() {
    int local;
    sub_00725520(0x8c2320, 0x55ed50);
    local = sub_0055e6a0();
    int* p = (int*)sub_00407410(&local);
    sub_004339d0();
    *p = 0x89f37c;
    sub_00630d23(0x779d40);
}
