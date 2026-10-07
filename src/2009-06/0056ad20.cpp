// roc 2009-06 0056ad20  unit: G3D::Shader  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ad20
//
// 0056ad20  8a4114               mov al, byte ptr [ecx + 0x14]
// 0056ad23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0056ad20 {
    char pad0[20];
    char m_x;
    char f();
};
char S_func_0056ad20::f()
{
    return m_x;
}
