// roc 2009-12 00444190  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444190
//
// 00444190  8a415d               mov al, byte ptr [ecx + 0x5d]
// 00444193  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00445610@ns_ROCX00000a@@QAEDXZ)

namespace ns_ROCX00000a {
struct S_func_00445610 {
    char pad0[93];
    char m_x;
    char f();
};
char S_func_00445610::f()
{
    return m_x;
}
}
