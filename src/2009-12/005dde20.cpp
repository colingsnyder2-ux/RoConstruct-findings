// roc 2009-12 005dde20  unit: RBX::ViewG3D  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dde20
//
// 005dde20  8b4108               mov eax, dword ptr [ecx + 8]
// 005dde23  05c4000000           add eax, 0xc4
// 005dde28  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00528a40@ns_ROCX00000b@@QAEHXZ)

namespace ns_ROCX00000b {
struct S_func_00528a40 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_00528a40::f()
{
    return m_x + 0xc4;
}
}
