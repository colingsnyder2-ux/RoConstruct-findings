// from server: 100% by colin
// roc 2007-08 00698cc0  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698cc0
//
// 00698cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00698cc4  398190000000         cmp dword ptr [ecx + 0x90], eax
// 00698cca  7413                 je 0x698cdf
// 00698ccc  898190000000         mov dword ptr [ecx + 0x90], eax
// 00698cd2  c744240401000000     mov dword ptr [esp + 4], 1
// 00698cda  e981ffffff           jmp 0x698c60
// 00698cdf  c20400               ret 4

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
