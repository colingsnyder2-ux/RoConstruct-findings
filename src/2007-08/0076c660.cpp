// from server: 76% by colin
struct S {
    void f();
};

extern "C" void __cdecl func_00725520(const char*, void*);
extern "C" void* __cdecl func_004026a0();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void* __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23(void*);

void S::f()
{
    void* p;
    func_00725520((const char*)0x8baec4, (void*)0x4035b0);
    p = func_004026a0();
    void* q = func_00407410(&p);
    void* r = func_004339d0();
    *(void**)r = (void*)0x881368;
    func_00630d23((void*)0x777210);
}
