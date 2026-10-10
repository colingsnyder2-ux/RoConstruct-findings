// from server: 84% by tester
struct T_func_00777e40 {
    void m();
};

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_004581f0();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void T_func_00777e40::m()
{
    *(int*)0x88a478 = 0x793690;
    func_00725520((void*)0x8bbfd4, (void*)0x458680);
    void* p = func_004581f0();
    void* q = func_00407410(&p);
    func_00407220(q);
}
