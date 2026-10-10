// from server: 17% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_00490b60 {
    char pad0[0x118];
    int m_118;
    int m_11c;
    char pad1[0x30];
    int m_150;
    char pad2[0x8];
    char m_15c;

    void f();
};

extern "C" void __cdecl sub_004915f0();
extern "C" void __cdecl sub_00488750();
extern "C" void __cdecl sub_00412dc0();
extern "C" void __cdecl sub_00630b9e();
extern "C" void __cdecl sub_0048a570();
extern "C" void __cdecl sub_00490ab0();
extern "C" void __cdecl sub_0044cf10();
extern "C" void __cdecl sub_00408740();
extern "C" void __cdecl sub_00549500();
extern "C" void __cdecl sub_0040a260();
extern "C" void __cdecl sub_00488c60();
extern "C" void __cdecl sub_00489490();
extern "C" void __cdecl sub_0048e0d0();
extern "C" void __cdecl sub_005a9350();
extern "C" void __cdecl sub_0040db50();
extern "C" void __cdecl sub_0062fc62();

void S_func_00490b60::f()
{
    sub_004915f0();
    sub_00488750();
    if (m_118 == 0 || m_150 == 0)
        return;
    sub_0048a570();
    sub_00490ab0();
    sub_0044cf10();
    sub_00408740();
    sub_00549500();
    sub_0040a260();
    sub_00488c60();
    sub_00489490();
    sub_0048e0d0();
    sub_005a9350();
    sub_0040db50();
    sub_0062fc62();
}
