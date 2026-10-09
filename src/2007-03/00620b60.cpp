// roc 2007-03 00620b60  unit: seg_00620000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620b60
//
// 00620b60  8b8198010000         mov eax, dword ptr [ecx + 0x198]
// 00620b66  8b8994010000         mov ecx, dword ptr [ecx + 0x194]
// 00620b6c  8d440805             lea eax, [eax + ecx + 5]
// 00620b70  c3                   ret 
// copied from an identical function in another client (function ?getValue@CPatchedControlComboBox@ns_ROCX000021@@QAEHXZ)

namespace ns_ROCX000021 {
struct CPatchedControlComboBox {
    int getValue();
    char pad[0x194];
    int field_194;
    int field_198;
};

int CPatchedControlComboBox::getValue() {
    return field_198 + field_194 + 5;
}
}
