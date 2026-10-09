// roc 2011-06 008519e0  unit: CSourceStream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008519e0
//
// 008519e0  83791002             cmp dword ptr [ecx + 0x10], 2
// 008519e4  7213                 jb 0x8519f9
// 008519e6  6a00                 push 0
// 008519e8  6a06                 push 6
// 008519ea  e851f7ffff           call 0x851140
// 008519ef  84c0                 test al, al
// 008519f1  7406                 je 0x8519f9
// 008519f3  b801000000           mov eax, 1
// 008519f8  c3                   ret 
// 008519f9  33c0                 xor eax, eax
// 008519fb  c3                   ret 
// copied from an identical function in another client (function ?f@CPropertyGridItemBrickColor@ns_ROCX00000b@@QAEHXZ)

namespace ns_ROCX00000b {
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
