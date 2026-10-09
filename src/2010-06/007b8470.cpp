// roc 2010-06 007b8470  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8470
//
// 007b8470  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 007b8476  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007b847a  894818               mov dword ptr [eax + 0x18], ecx
// 007b847d  c20400               ret 4
// copied from an identical function in another client (function ?SetInnerValue@CXTPCommandBar@ns_ROCX00000e@@QAEXH@Z)

namespace ns_ROCX00000e {
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
