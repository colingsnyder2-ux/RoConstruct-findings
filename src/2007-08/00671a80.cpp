// from server: 100% by colin
// roc 2007-08 00671a80  unit: CPropertyGridItemBrickColor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671a80
//
// 00671a80  83791002             cmp dword ptr [ecx + 0x10], 2
// 00671a84  7213                 jb 0x671a99
// 00671a86  6a00                 push 0
// 00671a88  6a06                 push 6
// 00671a8a  e831f7ffff           call 0x6711c0
// 00671a8f  84c0                 test al, al
// 00671a91  7406                 je 0x671a99
// 00671a93  b801000000           mov eax, 1
// 00671a98  c3                   ret 
// 00671a99  33c0                 xor eax, eax
// 00671a9b  c3                   ret 

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
