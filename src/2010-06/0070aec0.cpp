// roc 2010-06 0070aec0  unit: RBX::RbxG3D::Material::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aec0
//
// 0070aec0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0070aec3  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0070aec6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0070aec0 {
    char pad[28];
    int m_x;
};
struct S_func_0070aec0 {
    char pad[24];
    I_func_0070aec0* m_p;
    int f();
};
int S_func_0070aec0::f()
{
    return m_p->m_x;
}
