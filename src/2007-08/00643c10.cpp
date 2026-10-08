// from server: 100% by colin
// roc 2007-08 00643c10  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643c10
//
// 00643c10  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 00643c16  8b542408             mov edx, dword ptr [esp + 8]
// 00643c1a  0b442404             or eax, dword ptr [esp + 4]
// 00643c1e  f7d2                 not edx
// 00643c20  23c2                 and eax, edx
// 00643c22  8981e8000000         mov dword ptr [ecx + 0xe8], eax
// 00643c28  c20800               ret 8

struct CXTPCommandBar {
    unsigned char padding[0xe8];
    unsigned int m_nFlags;
    void ApplyFlags(unsigned int set, unsigned int clear);
};

void CXTPCommandBar::ApplyFlags(unsigned int set, unsigned int clear) {
    m_nFlags = (m_nFlags | set) & ~clear;
}
