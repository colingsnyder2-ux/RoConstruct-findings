// roc 2009-12 00574dd0  unit: RBX::RbxParticleEmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00574dd0
//
// 00574dd0  d981f0010000         fld dword ptr [ecx + 0x1f0]
// 00574dd6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00692f00@ns_ROCX000006@@QAEMXZ)

namespace ns_ROCX000006 {
struct S_func_00692f00 {
    char pad[496];
    float m_x;
    float f();
};
float S_func_00692f00::f()
{
    return m_x;
}
}
