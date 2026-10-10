// from server: 80% by colin
extern "C" void __stdcall func_00725520(int, int);
extern "C" void* __stdcall func_005577f0();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220();

void func_00779bc0()
{
    *(int*)0x89ebcc = 0x7a8a38;
    func_00725520(0x558700, 0x8c1f14);
    void* p = func_005577f0();
    func_00407410(&p);
    func_00407220();
}
