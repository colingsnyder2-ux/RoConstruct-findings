// roc 2009-12 00753790  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753790
//
// 00753790  8b8170030000         mov eax, dword ptr [ecx + 0x370]
// 00753796  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006d2610@ns_ROCX000060@@QAEHXZ)

namespace ns_ROCX000060 {
struct S_func_006d2610 {
    char pad0[880];
    int m_x;
    int f();
};
int S_func_006d2610::f()
{
    return m_x;
}
}
