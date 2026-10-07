// roc 2010-06 0070aa50  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aa50
//
// 0070aa50  8d4120               lea eax, [ecx + 0x20]
// 0070aa53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070aa50 {
    char pad0[32];
    int m_x;
    int* f();
};
int* S_func_0070aa50::f()
{
    return &m_x;
}
