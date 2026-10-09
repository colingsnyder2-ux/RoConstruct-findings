// roc 2009-06 0071fc00  unit: CPatchedControlComboBox  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071fc00
//
// 0071fc00  8d41e0               lea eax, [ecx - 0x20]
// 0071fc03  c3                   ret 
// copied from an identical function in another client (function ?f@CPatchedControlComboBox@ns_ROCX000006@@QAEHXZ)

namespace ns_ROCX000006 {
struct CPatchedControlComboBox {
    int f();
};

int CPatchedControlComboBox::f() {
    return (int)((char*)this - 0x20);
}
}
