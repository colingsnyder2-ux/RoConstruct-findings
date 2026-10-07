// roc 2010-06 00546df0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00546df0
//
// 00546df0  d94128               fld dword ptr [ecx + 0x28]
// 00546df3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00546df0 {
    char pad[40];
    float m_x;
    float f();
};
float S_func_00546df0::f()
{
    return m_x;
}
