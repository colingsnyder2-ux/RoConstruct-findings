// roc 2009-12 0076ce90  unit: RBX::VMouse::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076ce90
//
// 0076ce90  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 0076ce96  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006f6f80@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
struct S_func_006f6f80 {
    char pad0[368];
    int m_x;
    int f();
};
int S_func_006f6f80::f()
{
    return m_x;
}
}
