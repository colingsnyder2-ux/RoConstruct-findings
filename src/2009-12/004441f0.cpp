// roc 2009-12 004441f0  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004441f0
//
// 004441f0  8a4162               mov al, byte ptr [ecx + 0x62]
// 004441f3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445670@ns_ROCX000010@@QAEDXZ)

namespace ns_ROCX000010 {
struct S_func_00445670 {
    char pad0[98];
    char m_x;
    char f();
};
char S_func_00445670::f()
{
    return m_x;
}
}
