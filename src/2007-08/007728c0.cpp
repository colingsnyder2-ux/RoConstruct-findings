// from server: 81% by tester
// roc 2007-08 007728c0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007728c0

extern "C" void __cdecl sub_725520(int, int);
extern "C" void* __cdecl sub_57AC00();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339D0();
extern "C" void __cdecl sub_630D23(int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8C3054, 0x57B300);
    void* p = sub_57AC00();
    void* q = sub_407410(&p);
    sub_4339D0();
    *(int*)q = 0x8A21A4;
    sub_630D23(0x77A4D0);
}
