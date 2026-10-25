// from server: 100% by tester
// roc 2008-06 006b50f0  unit: CXTPControlComboBoxPopupBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b50f0
//
// 006b50f0  8d41a4               lea eax, [ecx - 0x5c]
// 006b50f3  c3                   ret 

struct CXTPControlComboBoxPopupBar {
    int f();
};

int CXTPControlComboBoxPopupBar::f() {
    return (int)(this - 0x5c);
}
