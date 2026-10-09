// roc 2007-03 0062f860  unit: seg_00620000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f860
//
// 0062f860  8d41e0               lea eax, [ecx - 0x20]
// 0062f863  c3                   ret 
// copied from an identical function in another client (function ?f@CPatchedControlComboBox@ns_ROCX000004@@QAEHXZ)

namespace ns_ROCX000004 {
struct CPatchedControlComboBox {
    int f();
};

int CPatchedControlComboBox::f() {
    return (int)((char*)this - 0x20);
}
}
