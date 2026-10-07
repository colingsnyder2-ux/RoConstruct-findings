// roc 2010-06 00546de0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00546de0
//
// 00546de0  d94124               fld dword ptr [ecx + 0x24]
// 00546de3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00546de0 {
    char pad[36];
    float m_x;
    float f();
};
float S_func_00546de0::f()
{
    return m_x;
}
