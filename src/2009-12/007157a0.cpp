// roc 2009-12 007157a0  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007157a0
//
// 007157a0  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 007157a6  83c038               add eax, 0x38
// 007157a9  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00695510@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
struct S_func_00695510 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_00695510::f()
{
    return m_x + 0x38;
}
}
