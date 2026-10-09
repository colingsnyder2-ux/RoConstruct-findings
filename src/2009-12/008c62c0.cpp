// roc 2009-12 008c62c0  unit: RBX::ImmediateMeshGenAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c62c0
//
// 008c62c0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008c62c3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007eb730@ns_ROCX000027@@QAEHXZ)

namespace ns_ROCX000027 {
struct S_func_007eb730 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_007eb730::f()
{
    return m_x;
}
}
