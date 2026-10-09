// roc 2012-06 009c9e20  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9e20
//
// 009c9e20  83791002             cmp dword ptr [ecx + 0x10], 2
// 009c9e24  7513                 jne 0x9c9e39
// 009c9e26  6a00                 push 0
// 009c9e28  6a04                 push 4
// 009c9e2a  e811f8ffff           call 0x9c9640
// 009c9e2f  84c0                 test al, al
// 009c9e31  7406                 je 0x9c9e39
// 009c9e33  b801000000           mov eax, 1
// 009c9e38  c3                   ret 
// 009c9e39  33c0                 xor eax, eax
// 009c9e3b  c3                   ret 
// copied from an identical function in another client (function ?isHighlighted@CPropertyGridItemBrickColor@ns_ROCX000012@@QAE_NXZ)

namespace ns_ROCX000012 {
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
