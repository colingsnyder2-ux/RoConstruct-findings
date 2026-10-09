// roc 2009-12 007537c0  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007537c0
//
// 007537c0  d98164030000         fld dword ptr [ecx + 0x364]
// 007537c6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006da330@ns_ROCX000072@@QAEMXZ)

namespace ns_ROCX000072 {
struct S_func_006da330 {
    char pad[868];
    float m_x;
    float f();
};
float S_func_006da330::f()
{
    return m_x;
}
}
