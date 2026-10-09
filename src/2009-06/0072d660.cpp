// roc 2009-06 0072d660  unit: CXTPControlComboBoxPopupBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d660
//
// 0072d660  8d41a4               lea eax, [ecx - 0x5c]
// 0072d663  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPControlComboBoxPopupBar@ns_ROCX000002@@QAEHXZ)

namespace ns_ROCX000002 {
struct CXTPControlComboBoxPopupBar {
    int f();
};

int CXTPControlComboBoxPopupBar::f() {
    return (int)(this - 0x5c);
}
}
