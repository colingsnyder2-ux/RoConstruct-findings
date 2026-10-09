// roc 2009-12 005e9e80  unit: G3D::Shader  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9e80
//
// 005e9e80  8a4114               mov al, byte ptr [ecx + 0x14]
// 005e9e83  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0056ad20@ns_ROCX000007@@QAEDXZ)

namespace ns_ROCX000007 {
struct S_func_0056ad20 {
    char pad0[20];
    char m_x;
    char f();
};
char S_func_0056ad20::f()
{
    return m_x;
}
}
