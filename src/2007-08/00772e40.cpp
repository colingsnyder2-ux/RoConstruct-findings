// from server: 72% by colin
// roc 2007-08 00772e40  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772e40

extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0058d750();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_004339d0();
extern "C" void __cdecl sub_00630d23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_00725520(0x8c37bc, 0x58dd70);
    int v = sub_0058d750();
    void* p = sub_00407410(&v);
    sub_004339d0();
    *(int*)p = 0x8a4508;
    sub_00630d23(0x77ae40, 0x8a4508);
}
