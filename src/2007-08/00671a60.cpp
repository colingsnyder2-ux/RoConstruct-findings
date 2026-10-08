// from server: 100% by colin
// roc 2007-08 00671a60  unit: CPropertyGridItemBrickColor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671a60
//
// 00671a60  83791002             cmp dword ptr [ecx + 0x10], 2
// 00671a64  7213                 jb 0x671a79
// 00671a66  6a01                 push 1
// 00671a68  6a05                 push 5
// 00671a6a  e851f7ffff           call 0x6711c0
// 00671a6f  84c0                 test al, al
// 00671a71  7406                 je 0x671a79
// 00671a73  b801000000           mov eax, 1
// 00671a78  c3                   ret 
// 00671a79  33c0                 xor eax, eax
// 00671a7b  c3                   ret 

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
