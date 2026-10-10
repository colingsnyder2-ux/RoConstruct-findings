// from server: 80% by colin
struct seg_00770000
{
    void func_00777930();
};

extern "C" void __stdcall func_00725520(int, int);
extern "C" void* __stdcall func_0042f600();
extern "C" void __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220();

void seg_00770000::func_00777930()
{
    *(int*)0x886ecc = 0x78baa8;
    func_00725520(0x430db0, 0x8bb928);
    void* p = func_0042f600();
    func_00407410(&p);
    func_00407220();
}
