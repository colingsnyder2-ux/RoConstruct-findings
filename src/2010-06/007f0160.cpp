// roc 2010-06 007f0160  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0160
//
// 007f0160  83791002             cmp dword ptr [ecx + 0x10], 2
// 007f0164  7513                 jne 0x7f0179
// 007f0166  6a01                 push 1
// 007f0168  6a05                 push 5
// 007f016a  e8b1f7ffff           call 0x7ef920
// 007f016f  84c0                 test al, al
// 007f0171  7406                 je 0x7f0179
// 007f0173  b801000000           mov eax, 1
// 007f0178  c3                   ret 
// 007f0179  33c0                 xor eax, eax
// 007f017b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000e@@QAEHXZ)

namespace ns_ROCX00000e {
struct CPropertyGridItemBrickColor {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    bool check(int a, int b);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (field10 == 2) {
        if (check(5, 1)) {
            return 1;
        }
    }
    return 0;
}
}
