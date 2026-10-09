// from server: 89% by colin
// roc 2007-08 006fe580  unit: CXTPTabManagerItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe580
//
// 006fe580  8b5170               mov edx, dword ptr [ecx + 0x70]
// 006fe583  56                   push esi
// 006fe584  33c0                 xor eax, eax
// 006fe586  85d2                 test edx, edx
// 006fe588  57                   push edi
// 006fe589  7e1f                 jle 0x6fe5aa
// 006fe58b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fe58f  90                   nop 
// 006fe590  85c0                 test eax, eax
// 006fe592  7c2c                 jl 0x6fe5c0
// 006fe594  3bc2                 cmp eax, edx
// 006fe596  7d28                 jge 0x6fe5c0
// 006fe598  8b796c               mov edi, dword ptr [ecx + 0x6c]
// 006fe59b  8b3c87               mov edi, dword ptr [edi + eax*4]
// 006fe59e  397704               cmp dword ptr [edi + 4], esi
// 006fe5a1  740e                 je 0x6fe5b1
// 006fe5a3  83c001               add eax, 1
// 006fe5a6  3bc2                 cmp eax, edx
// 006fe5a8  7ce6                 jl 0x6fe590
// 006fe5aa  5f                   pop edi
// 006fe5ab  33c0                 xor eax, eax
// 006fe5ad  5e                   pop esi
// 006fe5ae  c20400               ret 4
// 006fe5b1  3bc2                 cmp eax, edx
// 006fe5b3  7d0b                 jge 0x6fe5c0
// 006fe5b5  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 006fe5b8  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006fe5bb  5f                   pop edi
// 006fe5bc  5e                   pop esi
// 006fe5bd  c20400               ret 4
// 006fe5c0  e85b19f3ff           call 0x62ff20

struct CXTPTabManagerItem
{
    int FindItem(int id);
    char pad[0x6c];
    int* m_pItems;
    int m_nCount;
};

int CXTPTabManagerItem::FindItem(int id)
{
    int count = m_nCount;
    int i = 0;
    if (count > 0)
    {
        do
        {
            if (i < 0 || i >= count)
                break;
            int* p = m_pItems;
            int item = p[i];
            if (*(int*)(item + 4) == id)
            {
                if (i >= count)
                    break;
                return m_pItems[i];
            }
            i++;
        } while (i < count);
    }
    return 0;
}
