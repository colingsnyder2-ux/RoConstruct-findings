// roc 2011-06 0087a0c0  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a0c0
//
// 0087a0c0  8b442404             mov eax, dword ptr [esp + 4]
// 0087a0c4  398190000000         cmp dword ptr [ecx + 0x90], eax
// 0087a0ca  7413                 je 0x87a0df
// 0087a0cc  898190000000         mov dword ptr [ecx + 0x90], eax
// 0087a0d2  c744240401000000     mov dword ptr [esp + 4], 1
// 0087a0da  e981ffffff           jmp 0x87a060
// 0087a0df  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@ns_ROCX000019@@QAEXH@Z)

namespace ns_ROCX000019 {
struct CXTPPropertyGridItem {
    char pad[0x90];
    int m_nValue;
    void OnValueChanged(int value);

    void SetValue(int value);
};

void CXTPPropertyGridItem::SetValue(int value) {
    if (m_nValue != value) {
        m_nValue = value;
        OnValueChanged(1);
    }
}
}
