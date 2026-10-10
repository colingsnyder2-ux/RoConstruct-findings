// from server: 76% by colin
struct S_00778380 {
    void m();
};

extern "C" void __stdcall func_00725520(int, int);
extern "C" int __cdecl func_00486df0();
extern "C" void __cdecl func_00407410(int*);
extern "C" void __cdecl func_00407220();

void S_00778380::m()
{
    *(int*)0x88e300 = 0x79afdc;
    func_00725520(0x487930, 0x8bdc9c);
    int v = func_00486df0();
    func_00407410(&v);
    func_00407220();
}
