// roc 2011-06 0081ad70  unit: CXTPControlComboBoxPopupBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ad70
//
// 0081ad70  8d41a4               lea eax, [ecx - 0x5c]
// 0081ad73  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPControlComboBoxPopupBar@ns_ROCX000004@@QAEHXZ)

namespace ns_ROCX000004 {
struct CXTPControlComboBoxPopupBar {
    int f();
};

int CXTPControlComboBoxPopupBar::f() {
    return (int)(this - 0x5c);
}
}
