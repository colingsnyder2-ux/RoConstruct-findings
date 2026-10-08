// from server: 100% by colin
// roc 2007-08 00693f20  unit: CXTPStatusBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693f20
//
// 00693f20  81793050000500       cmp dword ptr [ecx + 0x30], 0x50050
// 00693f27  1bc0                 sbb eax, eax
// 00693f29  83c001               add eax, 1
// 00693f2c  c3                   ret 

struct CXTPStatusBar
{
    int IsCustom();
    char pad[0x30];
    unsigned int m_nStyle;
};

int CXTPStatusBar::IsCustom()
{
    return m_nStyle >= 0x50050 ? 1 : 0;
}
