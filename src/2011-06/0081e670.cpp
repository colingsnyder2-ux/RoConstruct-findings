// roc 2011-06 0081e670  unit: CXTPCommandBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081e670
//
// 0081e670  e83bfbffff           call 0x81e1b0
// 0081e675  85c0                 test eax, eax
// 0081e677  740c                 je 0x81e685
// 0081e679  83786800             cmp dword ptr [eax + 0x68], 0
// 0081e67d  7406                 je 0x81e685
// 0081e67f  b801000000           mov eax, 1
// 0081e684  c3                   ret 
// 0081e685  33c0                 xor eax, eax
// 0081e687  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPCommandBar@ns_ROCX000012@@QAEHXZ)

namespace ns_ROCX000012 {
struct CXTPCommandBarHelper
{
    char pad_0x00[0x68];
    int field_0x68;
};

extern "C" CXTPCommandBarHelper* __cdecl sub_647070();

struct CXTPCommandBar
{
    int IsVisible();
};

int CXTPCommandBar::IsVisible()
{
    CXTPCommandBarHelper* p = sub_647070();
    if (p != 0 && p->field_0x68 != 0)
        return 1;
    return 0;
}
}
