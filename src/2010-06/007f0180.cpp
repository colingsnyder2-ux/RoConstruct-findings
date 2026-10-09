// roc 2010-06 007f0180  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0180
//
// 007f0180  83791002             cmp dword ptr [ecx + 0x10], 2
// 007f0184  7213                 jb 0x7f0199
// 007f0186  6a01                 push 1
// 007f0188  6a05                 push 5
// 007f018a  e861f7ffff           call 0x7ef8f0
// 007f018f  84c0                 test al, al
// 007f0191  7406                 je 0x7f0199
// 007f0193  b801000000           mov eax, 1
// 007f0198  c3                   ret 
// 007f0199  33c0                 xor eax, eax
// 007f019b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000f@@QAEHXZ)

namespace ns_ROCX00000f {
struct CPropertyGridItemBrickColor {
    char pad[0x10];
    unsigned int count;
    bool sub_6711C0(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (count >= 2) {
        if (sub_6711C0(5, 1))
            return 1;
    }
    return 0;
}
}
