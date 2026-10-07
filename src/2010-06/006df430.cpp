// roc 2010-06 006df430  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006df430
//
// 006df430  8a4130               mov al, byte ptr [ecx + 0x30]
// 006df433  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006df430 {
    char pad0[48];
    char m_x;
    char f();
};
char S_func_006df430::f()
{
    return m_x;
}
