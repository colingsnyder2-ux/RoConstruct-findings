// roc 2009-12 0049cc80  unit: RBX::VPBBBuilder::?$BuilderLevelGenFunc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049cc80
//
// 0049cc80  d9410c               fld dword ptr [ecx + 0xc]
// 0049cc83  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00516650@ns_ROCX000008@@QAEMXZ)

namespace ns_ROCX000008 {
struct S_func_00516650 {
    char pad[12];
    float m_x;
    float f();
};
float S_func_00516650::f()
{
    return m_x;
}
}
