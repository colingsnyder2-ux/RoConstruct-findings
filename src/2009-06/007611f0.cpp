// roc 2009-06 007611f0  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007611f0
//
// 007611f0  83791002             cmp dword ptr [ecx + 0x10], 2
// 007611f4  7513                 jne 0x761209
// 007611f6  6a00                 push 0
// 007611f8  6a04                 push 4
// 007611fa  e801f8ffff           call 0x760a00
// 007611ff  84c0                 test al, al
// 00761201  7406                 je 0x761209
// 00761203  b801000000           mov eax, 1
// 00761208  c3                   ret 
// 00761209  33c0                 xor eax, eax
// 0076120b  c3                   ret 
// copied from an identical function in another client (function ?isHighlighted@CPropertyGridItemBrickColor@ns_ROCX000011@@QAE_NXZ)

namespace ns_ROCX000011 {
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
