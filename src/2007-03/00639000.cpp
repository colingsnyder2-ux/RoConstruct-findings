// roc 2007-03 00639000  unit: seg_00630000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00639000
//
// 00639000  8d41a4               lea eax, [ecx - 0x5c]
// 00639003  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPControlComboBoxPopupBar@ns_ROCX000003@@QAEHXZ)

namespace ns_ROCX000003 {
struct CXTPControlComboBoxPopupBar {
    int f();
};

int CXTPControlComboBoxPopupBar::f() {
    return (int)(this - 0x5c);
}
}
