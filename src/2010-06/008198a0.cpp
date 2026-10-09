// roc 2010-06 008198a0  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008198a0
//
// 008198a0  8b442404             mov eax, dword ptr [esp + 4]
// 008198a4  398190000000         cmp dword ptr [ecx + 0x90], eax
// 008198aa  7413                 je 0x8198bf
// 008198ac  898190000000         mov dword ptr [ecx + 0x90], eax
// 008198b2  c744240401000000     mov dword ptr [esp + 4], 1
// 008198ba  e981ffffff           jmp 0x819840
// 008198bf  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@ns_ROCX000005@@QAEXH@Z)

namespace ns_ROCX000005 {
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
