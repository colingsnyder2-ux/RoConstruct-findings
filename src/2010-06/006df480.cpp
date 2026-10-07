// roc 2010-06 006df480  unit: RBX::RbxG3D::Material::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006df480
//
// 006df480  8a81bc020000         mov al, byte ptr [ecx + 0x2bc]
// 006df486  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006df480 {
    char pad0[700];
    char m_x;
    char f();
};
char S_func_006df480::f()
{
    return m_x;
}
