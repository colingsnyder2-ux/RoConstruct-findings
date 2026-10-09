// roc 2009-12 007010a0  unit: RBX::TimerService  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007010a0
//
// 007010a0  8b4140               mov eax, dword ptr [ecx + 0x40]
// 007010a3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0074cd00@ns_ROCX00001b@@QAEHXZ)

namespace ns_ROCX00001b {
struct S_func_0074cd00 {
    char pad0[64];
    int m_x;
    int f();
};
int S_func_0074cd00::f()
{
    return m_x;
}
}
