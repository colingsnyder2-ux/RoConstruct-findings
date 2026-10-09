// roc 2009-12 004441d0  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004441d0
//
// 004441d0  8a4160               mov al, byte ptr [ecx + 0x60]
// 004441d3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445650@ns_ROCX00000e@@QAEDXZ)

namespace ns_ROCX00000e {
struct S_func_00445650 {
    char pad0[96];
    char m_x;
    char f();
};
char S_func_00445650::f()
{
    return m_x;
}
}
