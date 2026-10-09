// roc 2011-06 00851960  unit: CSourceStream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851960
//
// 00851960  83791002             cmp dword ptr [ecx + 0x10], 2
// 00851964  7513                 jne 0x851979
// 00851966  6a00                 push 0
// 00851968  6a04                 push 4
// 0085196a  e801f8ffff           call 0x851170
// 0085196f  84c0                 test al, al
// 00851971  7406                 je 0x851979
// 00851973  b801000000           mov eax, 1
// 00851978  c3                   ret 
// 00851979  33c0                 xor eax, eax
// 0085197b  c3                   ret 
// copied from an identical function in another client (function ?isHighlighted@CPropertyGridItemBrickColor@ns_ROCX000007@@QAE_NXZ)

namespace ns_ROCX000007 {
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
