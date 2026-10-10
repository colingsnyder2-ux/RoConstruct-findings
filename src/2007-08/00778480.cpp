// from server: 84% by tester
// roc 2007-08 00778480  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778480

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_486bf0();
extern "C" int __stdcall sub_407410(int*);
extern "C" void __stdcall sub_407220(int);

struct S {
    void f();
};

void S::f() {
    *(int*)0x88e2f0 = 0x79af80;
    sub_725520(0x4878f0, 0x8bdc8c);
    int v = sub_486bf0();
    sub_407220(sub_407410(&v));
}
