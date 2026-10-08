// from server: 100% by colin
// roc 2007-08 00643860  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643860
//
// 00643860  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00643866  c1e816               shr eax, 0x16
// 00643869  83e001               and eax, 1
// 0064386c  c3                   ret 

struct CXTPCommandBar
{
    char pad[0xec];
    unsigned int m_flags;
    unsigned int get_flag() const;
};

unsigned int CXTPCommandBar::get_flag() const
{
    return (m_flags >> 22) & 1;
}
