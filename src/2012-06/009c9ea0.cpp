// roc 2012-06 009c9ea0  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9ea0
//
// 009c9ea0  83791002             cmp dword ptr [ecx + 0x10], 2
// 009c9ea4  7213                 jb 0x9c9eb9
// 009c9ea6  6a00                 push 0
// 009c9ea8  6a06                 push 6
// 009c9eaa  e861f7ffff           call 0x9c9610
// 009c9eaf  84c0                 test al, al
// 009c9eb1  7406                 je 0x9c9eb9
// 009c9eb3  b801000000           mov eax, 1
// 009c9eb8  c3                   ret 
// 009c9eb9  33c0                 xor eax, eax
// 009c9ebb  c3                   ret 
// copied from an identical function in another client (function ?f@CPropertyGridItemBrickColor@ns_ROCX000016@@QAEHXZ)

namespace ns_ROCX000016 {
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
