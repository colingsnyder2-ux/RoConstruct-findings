// roc 2008-06 006b4cb0  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4cb0
//
// 006b4cb0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 006b4cb6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b4cba  894818               mov dword ptr [eax + 0x18], ecx
// 006b4cbd  c20400               ret 4
// copied from an identical function in another client (function ?SetInnerValue@CXTPCommandBar@ns_ROCX00001b@@QAEXH@Z)

namespace ns_ROCX00001b {
struct Inner
{
    char pad_0[0x18];
    int value;
};

struct CXTPCommandBar
{
    char pad_0[0x178];
    Inner* pInner;
    void SetInnerValue(int value);
};

void CXTPCommandBar::SetInnerValue(int value)
{
    pInner->value = value;
}
}
