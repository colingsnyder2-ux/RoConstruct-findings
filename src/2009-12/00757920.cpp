// roc 2009-12 00757920  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757920
//
// 00757920  d98198010000         fld dword ptr [ecx + 0x198]
// 00757926  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006de4d0@ns_ROCX000079@@QAEMXZ)

namespace ns_ROCX000079 {
struct S_func_006de4d0 {
    char pad[408];
    float m_x;
    float f();
};
float S_func_006de4d0::f()
{
    return m_x;
}
}
