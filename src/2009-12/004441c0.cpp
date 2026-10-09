// roc 2009-12 004441c0  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004441c0
//
// 004441c0  8a415f               mov al, byte ptr [ecx + 0x5f]
// 004441c3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445640@ns_ROCX00000d@@QAEDXZ)

namespace ns_ROCX00000d {
struct S_func_00445640 {
    char pad0[95];
    char m_x;
    char f();
};
char S_func_00445640::f()
{
    return m_x;
}
}
