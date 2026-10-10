// from server: 77% by tester
struct T_func_00778630 { void m(); };

struct T_func_00407220 { void m(void*); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_00491790();
extern "C" void* __cdecl func_00407410(void*);

void T_func_00778630::m()
{
    *(unsigned int*)0x88f5a8 = 0x79b9b4;
    func_00725520((void*)0x8bdfa0, (void*)0x492070);
    void* p = func_00491790();
    void* q = func_00407410(&p);
    ((T_func_00407220*)q)->m(&p);
}
