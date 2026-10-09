// roc 2009-12 00753780  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753780
//
// 00753780  8a8168030000         mov al, byte ptr [ecx + 0x368]
// 00753786  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006da300@ns_ROCX00006f@@QAEDXZ)

namespace ns_ROCX00006f {
struct S_func_006da300 {
    char pad0[872];
    char m_x;
    char f();
};
char S_func_006da300::f()
{
    return m_x;
}
}
