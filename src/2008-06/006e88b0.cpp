// roc 2008-06 006e88b0  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e88b0
//
// 006e88b0  83791001             cmp dword ptr [ecx + 0x10], 1
// 006e88b4  7513                 jne 0x6e88c9
// 006e88b6  6a0a                 push 0xa
// 006e88b8  6a04                 push 4
// 006e88ba  e821f8ffff           call 0x6e80e0
// 006e88bf  84c0                 test al, al
// 006e88c1  7406                 je 0x6e88c9
// 006e88c3  b801000000           mov eax, 1
// 006e88c8  c3                   ret 
// 006e88c9  33c0                 xor eax, eax
// 006e88cb  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
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
