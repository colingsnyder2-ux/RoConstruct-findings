// roc 2009-12 005df770  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df770
//
// 005df770  d94124               fld dword ptr [ecx + 0x24]
// 005df773  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00847fe0@ns_ROCX0000cf@@QAEMXZ)

namespace ns_ROCX0000cf {
struct S_func_00847fe0 {
    char pad[36];
    float m_x;
    float f();
};
float S_func_00847fe0::f()
{
    return m_x;
}
}
