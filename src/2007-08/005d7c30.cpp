// from server: 6% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall G1_func_0055e610();
extern "C" void __stdcall G1_func_005d56f0();
extern "C" void __stdcall G1_func_005d5950();
extern "C" void __stdcall G1_func_005d6930();
extern "C" void __stdcall G1_func_005d7c30();

struct S {
    void f();
};

void S::f()
{
    G1_func_0055e610();
    G1_func_005d56f0();
    G1_func_005d5950();
    G1_func_005d6930();
    G1_func_005d7c30();
}
