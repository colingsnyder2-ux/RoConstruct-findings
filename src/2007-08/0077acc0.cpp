// from server: 76% by colin
extern "C" void __stdcall func_00725520(int, int);
extern "C" int __cdecl func_0058d9f0();
extern "C" void __cdecl func_00407410(void*);
extern "C" void __cdecl func_00407220();

void func_0077acc0()
{
    *(int*)0x8a4520 = 0x7af774;
    func_00725520(0x58ddd0, 0x8c37d4);
    int v = func_0058d9f0();
    func_00407410(&v);
    func_00407220();
}
