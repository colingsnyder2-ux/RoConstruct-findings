// roc 2009-12 0083bfa0  unit: CXTPAccessible  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083bfa0
//
// 0083bfa0  83791001             cmp dword ptr [ecx + 0x10], 1
// 0083bfa4  7513                 jne 0x83bfb9
// 0083bfa6  6a0a                 push 0xa
// 0083bfa8  6a04                 push 4
// 0083bfaa  e821f8ffff           call 0x83b7d0
// 0083bfaf  84c0                 test al, al
// 0083bfb1  7406                 je 0x83bfb9
// 0083bfb3  b801000000           mov eax, 1
// 0083bfb8  c3                   ret 
// 0083bfb9  33c0                 xor eax, eax
// 0083bfbb  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000f@@QAEHXZ)

namespace ns_ROCX00000f {
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
