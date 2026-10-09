// roc 2008-06 006b89a0  unit: CXTPCommandBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b89a0
//
// 006b89a0  e85bfbffff           call 0x6b8500
// 006b89a5  85c0                 test eax, eax
// 006b89a7  740c                 je 0x6b89b5
// 006b89a9  83786800             cmp dword ptr [eax + 0x68], 0
// 006b89ad  7406                 je 0x6b89b5
// 006b89af  b801000000           mov eax, 1
// 006b89b4  c3                   ret 
// 006b89b5  33c0                 xor eax, eax
// 006b89b7  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPCommandBar@ns_ROCX000012@ns_ROCX000047@@QAEHXZ)

namespace ns_ROCX000012 {
struct S_func_007fd980 {
    char pad[368];
    double m_x;
    double f();
};
double S_func_007fd980::f()
{
    return m_x;
}
}
