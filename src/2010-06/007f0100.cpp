// roc 2010-06 007f0100  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0100
//
// 007f0100  83791001             cmp dword ptr [ecx + 0x10], 1
// 007f0104  7513                 jne 0x7f0119
// 007f0106  6a0a                 push 0xa
// 007f0108  6a04                 push 4
// 007f010a  e811f8ffff           call 0x7ef920
// 007f010f  84c0                 test al, al
// 007f0111  7406                 je 0x7f0119
// 007f0113  b801000000           mov eax, 1
// 007f0118  c3                   ret 
// 007f0119  33c0                 xor eax, eax
// 007f011b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000b@@QAEHXZ)

namespace ns_ROCX00000b {
struct CPropertyGridItemBrickColor {
    char pad[0x10];
    int field_0x10;
    bool sub_6711F0(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (field_0x10 == 1) {
        if (sub_6711F0(4, 10))
            return 1;
    }
    return 0;
}
}
