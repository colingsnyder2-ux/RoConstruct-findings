// from server: 86% by tester
struct T_func_0077ad00 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_0058d980();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __fastcall func_00407220(void*, void*);

void T_func_0077ad00::m()
{
    *(void**)0x8a451c = (void*)0x7af758;
    func_00725520((void*)0x58ddc0, (void*)0x8c37d0);
    void* p = func_0058d980();
    void* q = func_00407410(&p);
    func_00407220(q, 0);
}
