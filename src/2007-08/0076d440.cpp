// from server: 85% by tester
// roc 2007-08 0076d440  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d440

extern "C" void __stdcall sub_725520(int, int);
extern "C" void* __cdecl sub_4581f0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __fastcall sub_4339d0(void*);
extern "C" void __stdcall sub_630d23(void*);

struct S {
    void f();
};

void S::f() {
    int local;
    sub_725520(0x8bbfd4, 0x458680);
    local = (int)sub_4581f0();
    void* p = sub_407410(&local);
    void* q = sub_4339d0(p);
    *(int*)q = 0x88a478;
    sub_630d23((void*)0x777e40);
}
