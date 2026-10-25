// from server: 100% by tester
// roc 2010-06 007b88a0  unit: CXTPControlComboBoxPopupBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b88a0
//
// 007b88a0  8d41a4               lea eax, [ecx - 0x5c]
// 007b88a3  c3                   ret 

struct CPatchedControlComboBox {
    int f();
};

int CPatchedControlComboBox::f() {
    return (int)((char*)this - 0x5c);
}