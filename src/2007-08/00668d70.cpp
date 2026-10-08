// from server: 100% by colin
// roc 2007-08 00668d70  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668d70
//
// 00668d70  8b8160040000         mov eax, dword ptr [ecx + 0x460]
// 00668d76  83f804               cmp eax, 4
// 00668d79  7405                 je 0x668d80
// 00668d7b  83f805               cmp eax, 5
// 00668d7e  7506                 jne 0x668d86
// 00668d80  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 00668d86  c3                   ret 

struct CXTTreeBase
{
    char pad_0000[0x460];
    int  m_kind;
    int  m_value;
    int  getValue();
};

int CXTTreeBase::getValue()
{
    if (m_kind == 4 || m_kind == 5)
        return m_value;
    return m_kind;
}
