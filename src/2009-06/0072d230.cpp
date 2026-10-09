// roc 2009-06 0072d230  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d230
//
// 0072d230  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0072d236  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072d23a  894818               mov dword ptr [eax + 0x18], ecx
// 0072d23d  c20400               ret 4
// copied from an identical function in another client (function ?SetInnerValue@CXTPCommandBar@ns_ROCX000004@@QAEXH@Z)

namespace ns_ROCX000004 {
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
