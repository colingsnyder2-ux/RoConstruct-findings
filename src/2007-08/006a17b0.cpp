// from server: 79% by colin
// roc 2007-08 006a17b0  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a17b0
//
// 006a17b0  8b5160               mov edx, dword ptr [ecx + 0x60]
// 006a17b3  53                   push ebx
// 006a17b4  56                   push esi
// 006a17b5  33c0                 xor eax, eax
// 006a17b7  85d2                 test edx, edx
// 006a17b9  57                   push edi
// 006a17ba  7e23                 jle 0x6a17df
// 006a17bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a17c0  8b742410             mov esi, dword ptr [esp + 0x10]
// 006a17c4  3bc7                 cmp eax, edi
// 006a17c6  7410                 je 0x6a17d8
// 006a17c8  85c0                 test eax, eax
// 006a17ca  7c1c                 jl 0x6a17e8
// 006a17cc  3bc2                 cmp eax, edx
// 006a17ce  7d18                 jge 0x6a17e8
// 006a17d0  8b595c               mov ebx, dword ptr [ecx + 0x5c]
// 006a17d3  393483               cmp dword ptr [ebx + eax*4], esi
// 006a17d6  740a                 je 0x6a17e2
// 006a17d8  83c001               add eax, 1
// 006a17db  3bc2                 cmp eax, edx
// 006a17dd  7ce5                 jl 0x6a17c4
// 006a17df  83c8ff               or eax, 0xffffffff
// 006a17e2  5f                   pop edi
// 006a17e3  5e                   pop esi
// 006a17e4  5b                   pop ebx
// 006a17e5  c20800               ret 8
// 006a17e8  e833e7f8ff           call 0x62ff20

struct CXTPDockBar_UDOCK_INFO_CArray
{
    int Find(void* ptr, int start) const;
    char pad[0x5c];
    void** m_pData;
    int m_nSize;
};

int CXTPDockBar_UDOCK_INFO_CArray::Find(void* ptr, int start) const
{
    int i = 0;
    if (m_nSize <= 0)
        return -1;
    while (i < m_nSize)
    {
        if (i != start)
        {
            if (i < 0 || i >= m_nSize)
                break;
            if (m_pData[i] == ptr)
                return i;
        }
        i++;
    }
    return -1;
}
