// roc 2011-06 0081a930  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a930
//
// 0081a930  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0081a936  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081a93a  894818               mov dword ptr [eax + 0x18], ecx
// 0081a93d  c20400               ret 4
// copied from an identical function in another client (function ?SetInnerValue@CXTPCommandBar@ns_ROCX00000d@@QAEXH@Z)

namespace ns_ROCX00000d {
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
