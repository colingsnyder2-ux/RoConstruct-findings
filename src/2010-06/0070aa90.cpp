// roc 2010-06 0070aa90  unit: RBX::RbxG3D::Material::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aa90
//
// 0070aa90  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0070aa93  8b4028               mov eax, dword ptr [eax + 0x28]
// 0070aa96  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0070aa90 {
    char pad[40];
    int m_x;
};
struct S_func_0070aa90 {
    char pad[24];
    I_func_0070aa90* m_p;
    int f();
};
int S_func_0070aa90::f()
{
    return m_p->m_x;
}
