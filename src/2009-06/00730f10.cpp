// roc 2009-06 00730f10  unit: CXTPCommandBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00730f10
//
// 00730f10  e85bfbffff           call 0x730a70
// 00730f15  85c0                 test eax, eax
// 00730f17  740c                 je 0x730f25
// 00730f19  83786800             cmp dword ptr [eax + 0x68], 0
// 00730f1d  7406                 je 0x730f25
// 00730f1f  b801000000           mov eax, 1
// 00730f24  c3                   ret 
// 00730f25  33c0                 xor eax, eax
// 00730f27  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPCommandBar@ns_ROCX000013@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX000013 {
namespace ns_ROCX000079 {
struct S_func_0073f490 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_0073f490::f()
{
    return m_x;
}
}
}
