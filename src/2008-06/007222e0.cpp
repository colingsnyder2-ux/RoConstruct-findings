// roc 2008-06 007222e0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007222e0
//
// 007222e0  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 007222e6  c3                   ret 

struct CXTPRibbonBar {
    char pad[0x244];
    int m_value;
    int GetValue();
};

int CXTPRibbonBar::GetValue()
{
    return m_value;
}
