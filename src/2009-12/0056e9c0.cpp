// roc 2009-12 0056e9c0  unit: RakPeer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056e9c0
//
// 0056e9c0  c6815802000000       mov byte ptr [ecx + 0x258], 0
// 0056e9c7  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0050ed80@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
struct S_func_0050ed80 {
    char pad0[600];
    char m_x;
    void f();
};
void S_func_0050ed80::f()
{
    m_x = (char)0;
}
}
