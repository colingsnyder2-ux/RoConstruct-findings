// roc 2010-06 006dc250  unit: RBX::VehicleSeat  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dc250
//
// 006dc250  56                   push esi
// 006dc251  8bf1                 mov esi, ecx
// 006dc253  e8e8feffff           call 0x6dc140
// 006dc258  8b867c030000         mov eax, dword ptr [esi + 0x37c]
// 006dc25e  5e                   pop esi
// 006dc25f  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007556c0@ns_ROCX000015@@QAEHXZ)

namespace ns_ROCX000015 {
struct S_func_007556c0
{
    char pad0[892];
    int m_value;
    int f();
};

extern "C" void __cdecl sub_007555b0();

int S_func_007556c0::f()
{
    sub_007555b0();
    return m_value;
}
}
