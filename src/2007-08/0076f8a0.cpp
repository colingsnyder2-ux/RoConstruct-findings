// from server: 76% by colin
// roc 2007-08 0076f8a0  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f8a0

extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_004a5770();
extern "C" int __cdecl sub_00407410(int*);
extern "C" int __cdecl sub_004339d0();
extern "C" void __cdecl sub_00630d23(int);

struct S {
    void f();
};

void S::f() {
    int local;
    sub_00725520(0x8be95c, 0x4a7140);
    local = sub_004a5770();
    int* p = (int*)sub_00407410(&local);
    int* q = (int*)sub_004339d0();
    *q = 0x892a9c;
    sub_00630d23(0x778b60);
}
