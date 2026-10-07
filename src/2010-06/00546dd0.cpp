// roc 2010-06 00546dd0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00546dd0
//
// 00546dd0  8a4104               mov al, byte ptr [ecx + 4]
// 00546dd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00546dd0 {
    char pad0[4];
    char m_x;
    char f();
};
char S_func_00546dd0::f()
{
    return m_x;
}
