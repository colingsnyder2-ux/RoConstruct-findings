// roc 2009-12 006e3090  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3090
//
// 006e3090  d981d0010000         fld dword ptr [ecx + 0x1d0]
// 006e3096  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0066c250@ns_ROCX0000dc@@QAEMXZ)

namespace ns_ROCX0000dc {
struct S_func_0066c250 {
    char pad[464];
    float m_x;
    float f();
};
float S_func_0066c250::f()
{
    return m_x;
}
}
