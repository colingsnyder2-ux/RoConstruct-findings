// roc 2011-06 0087fce0  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fce0
//
// 0087fce0  56                   push esi
// 0087fce1  8bf1                 mov esi, ecx
// 0087fce3  e8c8faffff           call 0x87f7b0
// 0087fce8  c7460400000000       mov dword ptr [esi + 4], 0
// 0087fcef  5e                   pop esi
// 0087fcf0  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPResourceManager@ns_ROCX00002a@ns_ROCX000079@@QAEXXZ)

namespace ns_ROCX00002a {
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
}
