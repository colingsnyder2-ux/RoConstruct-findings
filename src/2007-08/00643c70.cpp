// from server: 100% by colin
// roc 2007-08 00643c70  unit: CXTPControlComboBoxPopupBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643c70
//
// 00643c70  8d41a4               lea eax, [ecx - 0x5c]
// 00643c73  c3                   ret 

struct CXTPControlComboBoxPopupBar {
    int f();
};

int CXTPControlComboBoxPopupBar::f() {
    return (int)(this - 0x5c);
}
