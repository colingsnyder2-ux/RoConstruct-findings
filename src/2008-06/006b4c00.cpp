// from server: 100% by tester
// roc 2008-06 006b4c00  unit: CXTPCommandBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4c00
//
// 006b4c00  8389e800000001       or dword ptr [ecx + 0xe8], 1
// 006b4c07  83c8ff               or eax, 0xffffffff
// 006b4c0a  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 006b4c10  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 006b4c16  c3                   ret 

struct CXTPCommandBar {
    char pad[0xcc];
    int m_nMinWidth;
    int m_nMinHeight;
    char pad2[0xe8 - 0xd0 - 4];
    unsigned int m_dwFlags;
    void Reset();
};

void CXTPCommandBar::Reset()
{
    m_dwFlags |= 1;
    m_nMinWidth = -1;
    m_nMinHeight = -1;
}
