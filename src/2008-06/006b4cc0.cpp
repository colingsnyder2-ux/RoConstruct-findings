// from server: 100% by tester
// roc 2008-06 006b4cc0  unit: CXTPCommandBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4cc0
//
// 006b4cc0  837c240400           cmp dword ptr [esp + 4], 0
// 006b4cc5  740d                 je 0x6b4cd4
// 006b4cc7  8189f000000000004000 or dword ptr [ecx + 0xf0], 0x400000
// 006b4cd1  c20400               ret 4
// 006b4cd4  81a1f0000000ffffbfff and dword ptr [ecx + 0xf0], 0xffbfffff
// 006b4cde  c20400               ret 4

struct CXTPCommandBar {
    char pad[0xf0];
    unsigned int m_dwStyle;
    void SetFlag(int bSet);
};

void CXTPCommandBar::SetFlag(int bSet)
{
    if (bSet != 0)
        m_dwStyle |= 0x400000;
    else
        m_dwStyle &= 0xffbfffff;
}
