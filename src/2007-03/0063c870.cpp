// roc 2007-03 0063c870  unit: seg_00630000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0063c870
//
// 0063c870  e85bfbffff           call 0x63c3d0
// 0063c875  85c0                 test eax, eax
// 0063c877  740c                 je 0x63c885
// 0063c879  83786800             cmp dword ptr [eax + 0x68], 0
// 0063c87d  7406                 je 0x63c885
// 0063c87f  b801000000           mov eax, 1
// 0063c884  c3                   ret 
// 0063c885  33c0                 xor eax, eax
// 0063c887  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPCommandBar@ns_ROCX00000e@@QAEHXZ)

namespace ns_ROCX00000e {
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
