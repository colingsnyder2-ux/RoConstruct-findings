// roc 2009-06 00847fc0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847fc0
//
// 00847fc0  d9411c               fld dword ptr [ecx + 0x1c]
// 00847fc3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847fc0 {
    char pad[28];
    float m_x;
    float f();
};
float S_func_00847fc0::f()
{
    return m_x;
}
