// roc 2010-06 0070aea0  unit: RBX::RbxG3D::Material::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aea0
//
// 0070aea0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0070aea3  8b4004               mov eax, dword ptr [eax + 4]
// 0070aea6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0070aea0 {
    char pad[4];
    int m_x;
};
struct S_func_0070aea0 {
    char pad[24];
    I_func_0070aea0* m_p;
    int f();
};
int S_func_0070aea0::f()
{
    return m_p->m_x;
}
