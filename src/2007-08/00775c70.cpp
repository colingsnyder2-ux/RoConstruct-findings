// from server: 77% by tester
struct S {
    void m();
};

extern "C" void __cdecl func_00725520(int, int);
extern "C" void* __cdecl func_005f0620();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void* __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23(void*, void*);

void S::m()
{
    func_00725520(0x8c77f0, 0x5f0c40);
    void* p = func_005f0620();
    void* q = func_00407410(&p);
    void* r = func_004339d0();
    *(void**)r = (void*)0x8b3ac4;
    func_00630d23((void*)0x77c6e0, r);
}
