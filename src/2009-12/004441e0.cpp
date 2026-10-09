// roc 2009-12 004441e0  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004441e0
//
// 004441e0  8a4161               mov al, byte ptr [ecx + 0x61]
// 004441e3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445660@ns_ROCX00000f@@QAEDXZ)

namespace ns_ROCX00000f {
struct S_func_00445660 {
    char pad0[97];
    char m_x;
    char f();
};
char S_func_00445660::f()
{
    return m_x;
}
}
