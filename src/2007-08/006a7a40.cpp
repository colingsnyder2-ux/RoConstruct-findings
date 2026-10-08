// from server: 100% by colin
// roc 2007-08 006a7a40  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7a40
//
// 006a7a40  33c0                 xor eax, eax
// 006a7a42  39817c020000         cmp dword ptr [ecx + 0x27c], eax
// 006a7a48  0f95c0               setne al
// 006a7a4b  c3                   ret 

struct CXTPRibbonBar
{
    char pad[0x27c];
    int m_nField;
    bool IsSet();
};

bool CXTPRibbonBar::IsSet()
{
    return m_nField != 0;
}
