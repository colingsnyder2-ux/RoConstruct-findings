// roc 2009-12 007537a0  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007537a0
//
// 007537a0  d9815c030000         fld dword ptr [ecx + 0x35c]
// 007537a6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006da310@ns_ROCX000070@@QAEMXZ)

namespace ns_ROCX000070 {
struct S_func_006da310 {
    char pad[860];
    float m_x;
    float f();
};
float S_func_006da310::f()
{
    return m_x;
}
}
