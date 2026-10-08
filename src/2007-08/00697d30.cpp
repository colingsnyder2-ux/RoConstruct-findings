// from server: 100% by colin
// roc 2007-08 00697d30  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697d30
//
// 00697d30  56                   push esi
// 00697d31  8bf1                 mov esi, ecx
// 00697d33  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00697d39  85c9                 test ecx, ecx
// 00697d3b  7410                 je 0x697d4d
// 00697d3d  e82e410000           call 0x69be70
// 00697d42  3bc6                 cmp eax, esi
// 00697d44  7507                 jne 0x697d4d
// 00697d46  b801000000           mov eax, 1
// 00697d4b  5e                   pop esi
// 00697d4c  c3                   ret 
// 00697d4d  33c0                 xor eax, eax
// 00697d4f  5e                   pop esi
// 00697d50  c3                   ret 

struct CXTPPropertyGridItem {
    char pad[0xb4];
    CXTPPropertyGridItem* m_pOwner;
    CXTPPropertyGridItem* GetParent();
    int IsChildOf();
};

int CXTPPropertyGridItem::IsChildOf()
{
    CXTPPropertyGridItem* pOwner = m_pOwner;
    if (pOwner != 0)
    {
        if (pOwner->GetParent() == this)
            return 1;
    }
    return 0;
}
