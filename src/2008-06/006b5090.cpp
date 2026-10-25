// from server: 100% by tester
// roc 2008-06 006b5090  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5090
//
// 006b5090  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 006b5096  8b542408             mov edx, dword ptr [esp + 8]
// 006b509a  0b442404             or eax, dword ptr [esp + 4]
// 006b509e  f7d2                 not edx
// 006b50a0  23c2                 and eax, edx
// 006b50a2  8981ec000000         mov dword ptr [ecx + 0xec], eax
// 006b50a8  c20800               ret 8

struct CXTPCommandBar {
    unsigned char padding[0xec];
    unsigned int m_nFlags;
    void ApplyFlags(unsigned int set, unsigned int clear);
};

void CXTPCommandBar::ApplyFlags(unsigned int set, unsigned int clear) {
    m_nFlags = (m_nFlags | set) & ~clear;
}
