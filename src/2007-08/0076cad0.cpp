// from server: 81% by tester
// roc 2007-08 0076cad0  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cad0

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_0041BE50();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_004339D0();
extern "C" void __cdecl sub_00630D23(void*);

struct S {
    void f();
};

void S::f()
{
    sub_00725520((void*)0x8bb47c, (void*)0x41c100);
    void* p = sub_0041BE50();
    void* q = sub_00407410(&p);
    sub_004339D0();
    *(void**)q = (void*)0x884a48;
    sub_00630D23((void*)0x777650);
}
