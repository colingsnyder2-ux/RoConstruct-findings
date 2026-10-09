// roc 2011-06 00879240  unit: CPatchedControlComboBox  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879240
//
// 00879240  8d41e0               lea eax, [ecx - 0x20]
// 00879243  c3                   ret 
// copied from an identical function in another client (function ?f@CPatchedControlComboBox@ns_ROCX00000e@@QAEHXZ)

namespace ns_ROCX00000e {
struct CPatchedControlComboBox {
    int f();
};

int CPatchedControlComboBox::f() {
    return (int)((char*)this - 0x20);
}
}
