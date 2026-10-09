// roc 2009-06 0078a8d0  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078a8d0
//
// 0078a8d0  8b442404             mov eax, dword ptr [esp + 4]
// 0078a8d4  398190000000         cmp dword ptr [ecx + 0x90], eax
// 0078a8da  7413                 je 0x78a8ef
// 0078a8dc  898190000000         mov dword ptr [ecx + 0x90], eax
// 0078a8e2  c744240401000000     mov dword ptr [esp + 4], 1
// 0078a8ea  e981ffffff           jmp 0x78a870
// 0078a8ef  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@ns_ROCX00001a@@QAEXH@Z)

namespace ns_ROCX00001a {
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
