// roc 2009-12 008b3ac0  unit: CXTPDockingPaneTabbedContainer  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3ac0
//
// 008b3ac0  8b4160               mov eax, dword ptr [ecx + 0x60]
// 008b3ac3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0074cd50@ns_ROCX00001c@@QAEHXZ)

namespace ns_ROCX00001c {
struct S_func_0074cd50 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_0074cd50::f()
{
    return m_x;
}
}
