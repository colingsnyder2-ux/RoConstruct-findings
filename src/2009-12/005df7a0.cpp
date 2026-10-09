// roc 2009-12 005df7a0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df7a0
//
// 005df7a0  d94130               fld dword ptr [ecx + 0x30]
// 005df7a3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00546e00@ns_ROCX000029@@QAEMXZ)

namespace ns_ROCX000029 {
struct S_func_00546e00 {
    char pad[48];
    float m_x;
    float f();
};
float S_func_00546e00::f()
{
    return m_x;
}
}
