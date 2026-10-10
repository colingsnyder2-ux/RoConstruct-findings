// from server: 84% by tester
struct T_func_007786d0 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_00498d00();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void T_func_007786d0::m()
{
    *(int*)0x88f6c4 = 0x79bef0;
    func_00725520((void*)0x8be2f4, (void*)0x498d80);
    void* p = func_00498d00();
    void* q = func_00407410(&p);
    func_00407220(q);
}
