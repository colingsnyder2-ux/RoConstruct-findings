// roc 2010-06 007f0120  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0120
//
// 007f0120  83791002             cmp dword ptr [ecx + 0x10], 2
// 007f0124  7513                 jne 0x7f0139
// 007f0126  6a00                 push 0
// 007f0128  6a04                 push 4
// 007f012a  e8f1f7ffff           call 0x7ef920
// 007f012f  84c0                 test al, al
// 007f0131  7406                 je 0x7f0139
// 007f0133  b801000000           mov eax, 1
// 007f0138  c3                   ret 
// 007f0139  33c0                 xor eax, eax
// 007f013b  c3                   ret 
// copied from an identical function in another client (function ?isHighlighted@CPropertyGridItemBrickColor@ns_ROCX00000c@@QAE_NXZ)

namespace ns_ROCX00000c {
struct CPropertyGridItemBrickColor {
    char gap[0x10];
    int m_state;
    bool checkFlag(int, int);
    bool isHighlighted();
};

bool CPropertyGridItemBrickColor::isHighlighted() {
    return m_state == 2 && checkFlag(4, 0);
}
}
