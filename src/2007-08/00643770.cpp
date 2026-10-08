// from server: 100% by colin
// roc 2007-08 00643770  unit: CXTPCommandBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643770
//
// 00643770  8389e400000001       or dword ptr [ecx + 0xe4], 1
// 00643777  83c8ff               or eax, 0xffffffff
// 0064377a  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 00643780  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 00643786  c3                   ret 

struct CXTPCommandBar {
    char pad[0xc8];
    int m_nMinWidth;
    int m_nMinHeight;
    char pad2[0xe4 - 0xcc - 4];
    unsigned int m_dwFlags;
    void Reset();
};

void CXTPCommandBar::Reset()
{
    m_dwFlags |= 1;
    m_nMinWidth = -1;
    m_nMinHeight = -1;
}
