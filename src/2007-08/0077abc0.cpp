// from server: 84% by tester
struct T_func_0077abc0 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_0058dbb0();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void T_func_0077abc0::m()
{
    *(int*)0x8a4530 = 0x7af7e4;
    func_00725520((void*)0x58de10, (void*)0x8c37e4);
    void* p = func_0058dbb0();
    void* q = func_00407410(&p);
    func_00407220(q);
}
