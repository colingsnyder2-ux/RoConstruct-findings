// roc 2009-12 007157b0  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007157b0
//
// 007157b0  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 007157b6  83c068               add eax, 0x68
// 007157b9  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00695520@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX00000a {
struct S_func_00695520 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_00695520::f()
{
    return m_x + 0x68;
}
}
