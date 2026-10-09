// roc 2012-06 009c9e00  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9e00
//
// 009c9e00  83791001             cmp dword ptr [ecx + 0x10], 1
// 009c9e04  7513                 jne 0x9c9e19
// 009c9e06  6a0a                 push 0xa
// 009c9e08  6a04                 push 4
// 009c9e0a  e831f8ffff           call 0x9c9640
// 009c9e0f  84c0                 test al, al
// 009c9e11  7406                 je 0x9c9e19
// 009c9e13  b801000000           mov eax, 1
// 009c9e18  c3                   ret 
// 009c9e19  33c0                 xor eax, eax
// 009c9e1b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000011@@QAEHXZ)

namespace ns_ROCX000011 {
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
