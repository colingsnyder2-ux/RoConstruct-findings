// roc 2009-12 004441a0  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004441a0
//
// 004441a0  8a4144               mov al, byte ptr [ecx + 0x44]
// 004441a3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445620@ns_ROCX00000b@@QAEDXZ)

namespace ns_ROCX00000b {
struct S_func_00445620 {
    char pad0[68];
    char m_x;
    char f();
};
char S_func_00445620::f()
{
    return m_x;
}
}
