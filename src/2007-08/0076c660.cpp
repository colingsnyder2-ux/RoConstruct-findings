// from server: 81% by tester
// roc 2007-08 0076c660  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c660

extern "C" void __cdecl func_00725520(void*, void*);
extern "C" void* __cdecl func_004026a0();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23(void*);

struct S {
    void f();
};

void S::f()
{
    void* p;
    func_00725520((void*)0x8baec4, (void*)0x4035b0);
    p = func_004026a0();
    void* q = func_00407410(&p);
    func_004339d0();
    *(void**)q = (void*)0x881368;
    func_00630d23((void*)0x777210);
}
