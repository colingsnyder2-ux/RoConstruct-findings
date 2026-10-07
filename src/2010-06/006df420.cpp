// roc 2010-06 006df420  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006df420
//
// 006df420  d9412c               fld dword ptr [ecx + 0x2c]
// 006df423  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006df420 {
    char pad[44];
    float m_x;
    float f();
};
float S_func_006df420::f()
{
    return m_x;
}
