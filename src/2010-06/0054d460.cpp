// roc 2010-06 0054d460  unit: G3D::Shader  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d460
//
// 0054d460  8a4114               mov al, byte ptr [ecx + 0x14]
// 0054d463  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0054d460 {
    char pad0[20];
    char m_x;
    char f();
};
char S_func_0054d460::f()
{
    return m_x;
}
