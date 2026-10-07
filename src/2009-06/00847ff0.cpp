// roc 2009-06 00847ff0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847ff0
//
// 00847ff0  d94128               fld dword ptr [ecx + 0x28]
// 00847ff3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847ff0 {
    char pad[40];
    float m_x;
    float f();
};
float S_func_00847ff0::f()
{
    return m_x;
}
