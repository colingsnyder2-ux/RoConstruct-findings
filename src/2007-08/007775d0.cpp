// from server: 84% by tester
struct T_func_007775d0 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_0041bf50();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void T_func_007775d0::m()
{
    *(void**)0x884a50 = (void*)0x787aa0;
    func_00725520((void*)0x8bb484, (void*)0x41c120);
    void* p = func_0041bf50();
    void* q = func_00407410(&p);
    func_00407220(q);
}
