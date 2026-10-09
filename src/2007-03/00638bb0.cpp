// roc 2007-03 00638bb0  unit: seg_00630000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638bb0
//
// 00638bb0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00638bb6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00638bba  894818               mov dword ptr [eax + 0x18], ecx
// 00638bbd  c20400               ret 4
// copied from an identical function in another client (function ?SetInnerValue@CXTPCommandBar@ns_ROCX000079@@QAEXH@Z)

namespace ns_ROCX000079 {
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
