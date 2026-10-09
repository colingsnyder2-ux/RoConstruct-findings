// roc 2009-12 00444170  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444170
//
// 00444170  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00444173  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00847e80@ns_ROCX0000ca@@QAEHXZ)

namespace ns_ROCX0000ca {
struct S_func_00847e80 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_00847e80::f()
{
    return m_x;
}
}
