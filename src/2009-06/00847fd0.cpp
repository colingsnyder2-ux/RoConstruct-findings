// roc 2009-06 00847fd0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847fd0
//
// 00847fd0  d94120               fld dword ptr [ecx + 0x20]
// 00847fd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847fd0 {
    char pad[32];
    float m_x;
    float f();
};
float S_func_00847fd0::f()
{
    return m_x;
}
