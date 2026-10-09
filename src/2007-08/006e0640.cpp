// from server: 76% by colin
// roc 2007-08 006e0640  unit: CXTPDockingPane  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0640
//
// 006e0640  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 006e0643  33c0                 xor eax, eax
// 006e0645  85c9                 test ecx, ecx
// 006e0647  742b                 je 0x6e0674
// 006e0649  8b5108               mov edx, dword ptr [ecx + 8]
// 006e064c  85d2                 test edx, edx
// 006e064e  56                   push esi
// 006e064f  57                   push edi
// 006e0650  7e1e                 jle 0x6e0670
// 006e0652  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e0656  85c0                 test eax, eax
// 006e0658  7c2c                 jl 0x6e0686
// 006e065a  3bc2                 cmp eax, edx
// 006e065c  7d28                 jge 0x6e0686
// 006e065e  8b7904               mov edi, dword ptr [ecx + 4]
// 006e0661  8b3c87               mov edi, dword ptr [edi + eax*4]
// 006e0664  397714               cmp dword ptr [edi + 0x14], esi
// 006e0667  740e                 je 0x6e0677
// 006e0669  83c001               add eax, 1
// 006e066c  3bc2                 cmp eax, edx
// 006e066e  7ce6                 jl 0x6e0656
// 006e0670  5f                   pop edi
// 006e0671  33c0                 xor eax, eax
// 006e0673  5e                   pop esi
// 006e0674  c20400               ret 4
// 006e0677  3bc2                 cmp eax, edx
// 006e0679  7d0b                 jge 0x6e0686
// 006e067b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006e067e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006e0681  5f                   pop edi
// 006e0682  5e                   pop esi
// 006e0683  c20400               ret 4
// 006e0686  e895f8f4ff           call 0x62ff20

struct CXTPDockingPane
{
    char pad[0x2c];
    void* m_pArray;
    int FindPane(void* pane);
};

int CXTPDockingPane::FindPane(void* pane)
{
    int* arr = (int*)m_pArray;
    int i = 0;
    if (arr == 0)
        return 0;
    int count = arr[2];
    if (count <= 0)
        return 0;
    while (i < count)
    {
        if (i < 0 || i >= count)
            break;
        int* item = (int*)arr[1];
        item = (int*)item[i];
        if (item[5] == (int)pane)
        {
            if (i >= count)
                break;
            return ((int*)arr[1])[i];
        }
        i++;
    }
    return 0;
}
