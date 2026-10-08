// from server: 100% by colin
// roc 2010-06 007aa360  unit: CPatchedControlComboBox  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aa360
//
// 007aa360  8d41e0               lea eax, [ecx - 0x20]
// 007aa363  c3                   ret 

struct CPatchedControlComboBox {
    int f();
};

int CPatchedControlComboBox::f() {
    return (int)((char*)this - 0x20);
}
