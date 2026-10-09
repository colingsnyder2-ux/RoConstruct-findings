// roc 2007-03 006865d0  unit: seg_00680000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006865d0
//
// 006865d0  83791002             cmp dword ptr [ecx + 0x10], 2
// 006865d4  7513                 jne 0x6865e9
// 006865d6  6a00                 push 0
// 006865d8  6a04                 push 4
// 006865da  e8e1f7ffff           call 0x685dc0
// 006865df  84c0                 test al, al
// 006865e1  7406                 je 0x6865e9
// 006865e3  b801000000           mov eax, 1
// 006865e8  c3                   ret 
// 006865e9  33c0                 xor eax, eax
// 006865eb  c3                   ret 
// copied from an identical function in another client (function ?isHighlighted@CPropertyGridItemBrickColor@ns_ROCX000008@@QAE_NXZ)

namespace ns_ROCX000008 {
struct CPropertyGridItemBrickColor {
    char gap[0x10];
    int m_state;
    bool checkFlag(int, int);
    bool isHighlighted();
};

bool CPropertyGridItemBrickColor::isHighlighted() {
    return m_state == 2 && checkFlag(4, 0);
}
}
