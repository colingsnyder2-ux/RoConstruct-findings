// roc 2009-06 007611d0  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007611d0
//
// 007611d0  83791001             cmp dword ptr [ecx + 0x10], 1
// 007611d4  7513                 jne 0x7611e9
// 007611d6  6a0a                 push 0xa
// 007611d8  6a04                 push 4
// 007611da  e821f8ffff           call 0x760a00
// 007611df  84c0                 test al, al
// 007611e1  7406                 je 0x7611e9
// 007611e3  b801000000           mov eax, 1
// 007611e8  c3                   ret 
// 007611e9  33c0                 xor eax, eax
// 007611eb  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000010@@QAEHXZ)

namespace ns_ROCX000010 {
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
