// roc 2007-03 006840e0  unit: seg_00680000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006840e0
//
// 006840e0  8b442404             mov eax, dword ptr [esp + 4]
// 006840e4  398190000000         cmp dword ptr [ecx + 0x90], eax
// 006840ea  7413                 je 0x6840ff
// 006840ec  898190000000         mov dword ptr [ecx + 0x90], eax
// 006840f2  c744240401000000     mov dword ptr [esp + 4], 1
// 006840fa  e981ffffff           jmp 0x684080
// 006840ff  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@ns_ROCX000010@@QAEXH@Z)

namespace ns_ROCX000010 {
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
