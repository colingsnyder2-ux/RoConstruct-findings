// roc 2009-12 004441b0  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004441b0
//
// 004441b0  8a4145               mov al, byte ptr [ecx + 0x45]
// 004441b3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445630@ns_ROCX00000c@@QAEDXZ)

namespace ns_ROCX00000c {
struct S_func_00445630 {
    char pad0[69];
    char m_x;
    char f();
};
char S_func_00445630::f()
{
    return m_x;
}
}
