// roc 2008-06 006e88d0  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e88d0
//
// 006e88d0  83791002             cmp dword ptr [ecx + 0x10], 2
// 006e88d4  7513                 jne 0x6e88e9
// 006e88d6  6a00                 push 0
// 006e88d8  6a04                 push 4
// 006e88da  e801f8ffff           call 0x6e80e0
// 006e88df  84c0                 test al, al
// 006e88e1  7406                 je 0x6e88e9
// 006e88e3  b801000000           mov eax, 1
// 006e88e8  c3                   ret 
// 006e88e9  33c0                 xor eax, eax
// 006e88eb  c3                   ret 
// copied from an identical function in another client (function ?isHighlighted@CPropertyGridItemBrickColor@ns_ROCX000015@@QAE_NXZ)

namespace ns_ROCX000015 {
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
