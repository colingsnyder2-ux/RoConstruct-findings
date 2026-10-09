// roc 2009-12 006e30a0  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e30a0
//
// 006e30a0  d981d4010000         fld dword ptr [ecx + 0x1d4]
// 006e30a6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00666550@ns_ROCX0000d2@@QAEMXZ)

namespace ns_ROCX0000d2 {
struct S_func_00666550 {
    char pad[468];
    float m_x;
    float f();
};
float S_func_00666550::f()
{
    return m_x;
}
}
