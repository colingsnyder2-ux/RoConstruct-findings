// from server: 78% by colin
// roc 2007-08 0076d3a0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d3a0

extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0044d070();
extern "C" int __cdecl sub_00407410(int*);
extern "C" int __cdecl sub_004339d0();
extern "C" void __cdecl sub_00630d23(int, int);

struct S {
    void f();
};

void S::f() {
    int local;
    sub_00725520(0x44de00, 0x8bbee4);
    local = sub_0044d070();
    int* p = (int*)sub_00407410(&local);
    int* q = (int*)sub_004339d0();
    *q = 0x8896a8;
    sub_00630d23(0x777dd0, 0);
}
