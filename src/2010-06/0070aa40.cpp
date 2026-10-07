// roc 2010-06 0070aa40  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aa40
//
// 0070aa40  8d4118               lea eax, [ecx + 0x18]
// 0070aa43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070aa40 {
    char pad0[24];
    int m_x;
    int* f();
};
int* S_func_0070aa40::f()
{
    return &m_x;
}
