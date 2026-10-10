// from server: 84% by tester
struct T_func_00777590 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_0041bfd0();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

extern void* G_008bb488;
extern void* G_0041c130;
extern int G_00884a54;

void T_func_00777590::m()
{
    G_00884a54 = 0x787abc;
    func_00725520(&G_008bb488, &G_0041c130);
    void* p = func_0041bfd0();
    void* q = func_00407410(&p);
    func_00407220(q);
}
