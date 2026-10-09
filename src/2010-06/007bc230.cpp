// roc 2010-06 007bc230  unit: CXTPCommandBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bc230
//
// 007bc230  e83bfbffff           call 0x7bbd70
// 007bc235  85c0                 test eax, eax
// 007bc237  740c                 je 0x7bc245
// 007bc239  83786800             cmp dword ptr [eax + 0x68], 0
// 007bc23d  7406                 je 0x7bc245
// 007bc23f  b801000000           mov eax, 1
// 007bc244  c3                   ret 
// 007bc245  33c0                 xor eax, eax
// 007bc247  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPCommandBar@ns_ROCX00000f@@QAEHXZ)

namespace ns_ROCX00000f {
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
