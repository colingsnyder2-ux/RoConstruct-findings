// from server: 77% by tester
struct T_func_0077c5a0 { void m(); };

struct T_func_00407220 { void m(int, int); };

extern "C" void __stdcall func_00725520(int, int);
extern "C" int __cdecl func_005f0850();
extern "C" int __cdecl func_00407410(int*);

void T_func_0077c5a0::m()
{
    *(int*)0x8b3ad8 = 0x7c088c;
    func_00725520(0x5f0c90, 0x8c7804);
    int v = func_005f0850();
    int* p = &v;
    T_func_00407220* obj = (T_func_00407220*)func_00407410(p);
    obj->m(0, 0);
}
