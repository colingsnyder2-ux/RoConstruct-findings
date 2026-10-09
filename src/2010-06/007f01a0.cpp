// roc 2010-06 007f01a0  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f01a0
//
// 007f01a0  83791002             cmp dword ptr [ecx + 0x10], 2
// 007f01a4  7213                 jb 0x7f01b9
// 007f01a6  6a00                 push 0
// 007f01a8  6a06                 push 6
// 007f01aa  e841f7ffff           call 0x7ef8f0
// 007f01af  84c0                 test al, al
// 007f01b1  7406                 je 0x7f01b9
// 007f01b3  b801000000           mov eax, 1
// 007f01b8  c3                   ret 
// 007f01b9  33c0                 xor eax, eax
// 007f01bb  c3                   ret 
// copied from an identical function in another client (function ?f@CPropertyGridItemBrickColor@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
struct CPropertyGridItemBrickColor {
    char pad_0[0x10];
    unsigned int field_10;
    bool sub_6711c0(int, int);
    int f();
};

int CPropertyGridItemBrickColor::f() {
    if (field_10 >= 2) {
        if (sub_6711c0(6, 0))
            return 1;
    }
    return 0;
}
}
