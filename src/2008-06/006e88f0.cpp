// roc 2008-06 006e88f0  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e88f0
//
// 006e88f0  83791002             cmp dword ptr [ecx + 0x10], 2
// 006e88f4  7513                 jne 0x6e8909
// 006e88f6  6a00                 push 0
// 006e88f8  6a05                 push 5
// 006e88fa  e8e1f7ffff           call 0x6e80e0
// 006e88ff  84c0                 test al, al
// 006e8901  7406                 je 0x6e8909
// 006e8903  b801000000           mov eax, 1
// 006e8908  c3                   ret 
// 006e8909  33c0                 xor eax, eax
// 006e890b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000016@@QAEHXZ)

namespace ns_ROCX000016 {
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
