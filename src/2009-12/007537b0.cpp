// roc 2009-12 007537b0  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007537b0
//
// 007537b0  d98160030000         fld dword ptr [ecx + 0x360]
// 007537b6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006da320@ns_ROCX000071@@QAEMXZ)

namespace ns_ROCX000071 {
struct S_func_006da320 {
    char pad[864];
    float m_x;
    float f();
};
float S_func_006da320::f()
{
    return m_x;
}
}
