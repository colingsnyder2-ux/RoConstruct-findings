// roc 2008-06 005075e0  unit: G3D::Shader  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005075e0
//
// 005075e0  8a4114               mov al, byte ptr [ecx + 0x14]
// 005075e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005075e0 {
    char pad0[20];
    char m_x;
    char f();
};
char S_func_005075e0::f()
{
    return m_x;
}
