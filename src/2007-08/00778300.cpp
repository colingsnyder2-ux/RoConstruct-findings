// from server: 87% by tester
struct T_func_00778300 { void m(); };

struct T_func_00407220 { void m(); };
extern T_func_00407220* func_00407410(void*);

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_00486ef0();

void T_func_00778300::m()
{
    *(unsigned long*)0x88e308 = 0x79b014;
    func_00725520((void*)0x8bdca4, (void*)0x487950);
    void* p = func_00486ef0();
    T_func_00407220* q = func_00407410(&p);
    q->m();
}
