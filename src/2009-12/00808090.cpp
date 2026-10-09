// roc 2009-12 00808090  unit: CXTPCommandBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808090
//
// 00808090  e83bfbffff           call 0x807bd0
// 00808095  85c0                 test eax, eax
// 00808097  740c                 je 0x8080a5
// 00808099  83786800             cmp dword ptr [eax + 0x68], 0
// 0080809d  7406                 je 0x8080a5
// 0080809f  b801000000           mov eax, 1
// 008080a4  c3                   ret 
// 008080a5  33c0                 xor eax, eax
// 008080a7  c3                   ret 
// copied from an identical function in another client (function ?IsVisible@CXTPCommandBar@ns_ROCX000013@@QAEHXZ)

namespace ns_ROCX000013 {
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
