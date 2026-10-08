// from server: 100% by colin
// roc 2007-08 00636400  unit: CPatchedControlComboBox  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636400
//
// 00636400  8b8198010000         mov eax, dword ptr [ecx + 0x198]
// 00636406  8b8994010000         mov ecx, dword ptr [ecx + 0x194]
// 0063640c  8d440805             lea eax, [eax + ecx + 5]
// 00636410  c3                   ret 

struct CPatchedControlComboBox {
    int getValue();
    char pad[0x194];
    int field_194;
    int field_198;
};

int CPatchedControlComboBox::getValue() {
    return field_198 + field_194 + 5;
}
