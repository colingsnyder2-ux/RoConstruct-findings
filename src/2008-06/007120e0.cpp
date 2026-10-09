// roc 2008-06 007120e0  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007120e0
//
// 007120e0  8b442404             mov eax, dword ptr [esp + 4]
// 007120e4  398190000000         cmp dword ptr [ecx + 0x90], eax
// 007120ea  7413                 je 0x7120ff
// 007120ec  898190000000         mov dword ptr [ecx + 0x90], eax
// 007120f2  c744240401000000     mov dword ptr [esp + 4], 1
// 007120fa  e981ffffff           jmp 0x712080
// 007120ff  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@ns_ROCX000007@@QAEXH@Z)

namespace ns_ROCX000007 {
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
