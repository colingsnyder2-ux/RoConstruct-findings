// roc 2009-12 008951e0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008951e0
//
// 008951e0  8b818c020000         mov eax, dword ptr [ecx + 0x28c]
// 008951e6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007b7f90@ns_ROCX00008d@@QAEHXZ)

namespace ns_ROCX00008d {
struct S_func_007b7f90 {
    char pad0[652];
    int m_x;
    int f();
};
int S_func_007b7f90::f()
{
    return m_x;
}
}
