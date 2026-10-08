// from server: 100% by colin
// roc 2007-08 00643830  unit: CXTPCommandBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643830
//
// 00643830  837c240400           cmp dword ptr [esp + 4], 0
// 00643835  740d                 je 0x643844
// 00643837  8189ec00000000004000 or dword ptr [ecx + 0xec], 0x400000
// 00643841  c20400               ret 4
// 00643844  81a1ec000000ffffbfff and dword ptr [ecx + 0xec], 0xffbfffff
// 0064384e  c20400               ret 4

struct CXTPCommandBar {
    char pad[0xec];
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
