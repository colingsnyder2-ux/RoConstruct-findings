// roc 2008-06 00711260  unit: CPatchedControlComboBox  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711260
//
// 00711260  8d41e0               lea eax, [ecx - 0x20]
// 00711263  c3                   ret 
// copied from an identical function in another client (function ?f@CPatchedControlComboBox@ns_ROCX00000b@@QAEHXZ)

namespace ns_ROCX00000b {
struct CPatchedControlComboBox {
    int f();
};

int CPatchedControlComboBox::f() {
    return (int)((char*)this - 0x20);
}
}
