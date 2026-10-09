// roc 2009-12 00894e00  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894e00
//
// 00894e00  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 00894e06  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007b7bb0@ns_ROCX00008b@@QAEHXZ)

namespace ns_ROCX00008b {
struct S_func_007b7bb0 {
    char pad0[604];
    int m_x;
    int f();
};
int S_func_007b7bb0::f()
{
    return m_x;
}
}
