// roc 2008-06 006e8950  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8950
//
// 006e8950  83791002             cmp dword ptr [ecx + 0x10], 2
// 006e8954  7213                 jb 0x6e8969
// 006e8956  6a00                 push 0
// 006e8958  6a06                 push 6
// 006e895a  e851f7ffff           call 0x6e80b0
// 006e895f  84c0                 test al, al
// 006e8961  7406                 je 0x6e8969
// 006e8963  b801000000           mov eax, 1
// 006e8968  c3                   ret 
// 006e8969  33c0                 xor eax, eax
// 006e896b  c3                   ret 
// copied from an identical function in another client (function ?f@CPropertyGridItemBrickColor@ns_ROCX000019@@QAEHXZ)

namespace ns_ROCX000019 {
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
