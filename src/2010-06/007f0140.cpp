// roc 2010-06 007f0140  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0140
//
// 007f0140  83791002             cmp dword ptr [ecx + 0x10], 2
// 007f0144  7513                 jne 0x7f0159
// 007f0146  6a00                 push 0
// 007f0148  6a05                 push 5
// 007f014a  e8d1f7ffff           call 0x7ef920
// 007f014f  84c0                 test al, al
// 007f0151  7406                 je 0x7f0159
// 007f0153  b801000000           mov eax, 1
// 007f0158  c3                   ret 
// 007f0159  33c0                 xor eax, eax
// 007f015b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000d@@QAEHXZ)

namespace ns_ROCX00000d {
struct CPropertyGridItemBrickColor {
    char gap[0x10];
    int m_state;
    bool check(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (m_state == 2) {
        if (check(5, 0)) {
            return 1;
        }
    }
    return 0;
}
}
