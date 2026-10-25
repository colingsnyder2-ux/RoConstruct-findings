// from server: 100% by auto
// roc 2008-06 007acef0  unit: RBX::RenderNew::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acef0
//
// 007acef0  8a4104               mov al, byte ptr [ecx + 4]
// 007acef3  c3                   ret 

struct S_func_007acef0 {
    char pad0[4];
    char m_x;
    char f();
};
char S_func_007acef0::f()
{
    return m_x;
}
