// roc 2010-06 0070aeb0  unit: RBX::RbxG3D::Material::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aeb0
//
// 0070aeb0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0070aeb3  8b4010               mov eax, dword ptr [eax + 0x10]
// 0070aeb6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0070aeb0 {
    char pad[16];
    int m_x;
};
struct S_func_0070aeb0 {
    char pad[24];
    I_func_0070aeb0* m_p;
    int f();
};
int S_func_0070aeb0::f()
{
    return m_p->m_x;
}
