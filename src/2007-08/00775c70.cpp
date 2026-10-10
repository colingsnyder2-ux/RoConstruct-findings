// from server: 76% by colin
extern "C" void __cdecl func_00725520();
extern "C" void __cdecl func_005f0c40();
extern "C" void __cdecl func_008c77f0();
extern "C" void* __cdecl func_005f0620();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23();
extern "C" void __cdecl func_0077c6e0();

void func_00775c70()
{
    func_00725520();
    func_005f0c40();
    func_008c77f0();
    void* p = func_005f0620();
    void* q = func_00407410(&p);
    func_004339d0();
    *(void**)q = (void*)0x8b3ac4;
    func_00630d23();
    func_0077c6e0();
}
