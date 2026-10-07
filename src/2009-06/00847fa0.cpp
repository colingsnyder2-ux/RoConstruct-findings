// roc 2009-06 00847fa0  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847fa0
//
// 00847fa0  8a4104               mov al, byte ptr [ecx + 4]
// 00847fa3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847fa0 {
    char pad0[4];
    char m_x;
    char f();
};
char S_func_00847fa0::f()
{
    return m_x;
}
