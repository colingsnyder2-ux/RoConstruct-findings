// from server: 100% by colin
// roc 2007-08 00671a00  unit: CPropertyGridItemBrickColor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671a00
//
// 00671a00  83791002             cmp dword ptr [ecx + 0x10], 2
// 00671a04  7513                 jne 0x671a19
// 00671a06  6a00                 push 0
// 00671a08  6a04                 push 4
// 00671a0a  e8e1f7ffff           call 0x6711f0
// 00671a0f  84c0                 test al, al
// 00671a11  7406                 je 0x671a19
// 00671a13  b801000000           mov eax, 1
// 00671a18  c3                   ret 
// 00671a19  33c0                 xor eax, eax
// 00671a1b  c3                   ret 

struct CPropertyGridItemBrickColor {
    char gap[0x10];
    int m_state;
    bool checkFlag(int, int);
    bool isHighlighted();
};

bool CPropertyGridItemBrickColor::isHighlighted() {
    return m_state == 2 && checkFlag(4, 0);
}
