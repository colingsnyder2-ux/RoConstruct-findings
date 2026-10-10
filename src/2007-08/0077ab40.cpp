// from server: 86% by tester
struct T_func_0077ab40 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_0058dc90();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __fastcall func_00407220(void*, void*);

void T_func_0077ab40::m()
{
    *(int*)0x8a4538 = 0x7afa60;
    func_00725520((void*)0x8c37ec, (void*)0x58de30);
    void* p = func_0058dc90();
    void* q = func_00407410(&p);
    func_00407220(q, 0);
}
