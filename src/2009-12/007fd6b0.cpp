// roc 2009-12 007fd6b0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd6b0
//
// 007fd6b0  8d8148010000         lea eax, [ecx + 0x148]
// 007fd6b6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007227f0@ns_ROCX00003a@@QAEPAHXZ)

namespace ns_ROCX00003a {
struct S_func_007227f0 {
    char pad0[328];
    int m_x;
    int* f();
};
int* S_func_007227f0::f()
{
    return &m_x;
}
}
