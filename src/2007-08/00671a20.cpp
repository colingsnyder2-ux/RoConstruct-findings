// from server: 100% by colin
// roc 2007-08 00671a20  unit: CPropertyGridItemBrickColor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671a20
//
// 00671a20  83791002             cmp dword ptr [ecx + 0x10], 2
// 00671a24  7513                 jne 0x671a39
// 00671a26  6a00                 push 0
// 00671a28  6a05                 push 5
// 00671a2a  e8c1f7ffff           call 0x6711f0
// 00671a2f  84c0                 test al, al
// 00671a31  7406                 je 0x671a39
// 00671a33  b801000000           mov eax, 1
// 00671a38  c3                   ret 
// 00671a39  33c0                 xor eax, eax
// 00671a3b  c3                   ret 

struct CPropertyGridItemBrickColor {
    char gap[0x10];
    int m_state;
    bool check(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (m_state == 2) {
        if (check(5, 0)) {
            return 1;
        }
    }
    return 0;
}
