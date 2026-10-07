// roc 2010-06 00546e00  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00546e00
//
// 00546e00  d94130               fld dword ptr [ecx + 0x30]
// 00546e03  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00546e00 {
    char pad[48];
    float m_x;
    float f();
};
float S_func_00546e00::f()
{
    return m_x;
}
