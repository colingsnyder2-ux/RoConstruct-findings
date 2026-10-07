// roc 2009-06 00847fb0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847fb0
//
// 00847fb0  8d4110               lea eax, [ecx + 0x10]
// 00847fb3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847fb0 {
    char pad0[16];
    int m_x;
    int* f();
};
int* S_func_00847fb0::f()
{
    return &m_x;
}
