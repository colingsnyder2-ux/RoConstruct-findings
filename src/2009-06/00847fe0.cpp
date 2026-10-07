// roc 2009-06 00847fe0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847fe0
//
// 00847fe0  d94124               fld dword ptr [ecx + 0x24]
// 00847fe3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847fe0 {
    char pad[36];
    float m_x;
    float f();
};
float S_func_00847fe0::f()
{
    return m_x;
}
