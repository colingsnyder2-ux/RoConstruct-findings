// from server: 100% by colin
// roc 2007-08 00702400  unit: CXTPTabPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00702400
//
// 00702400  8b442404             mov eax, dword ptr [esp + 4]
// 00702404  8b00                 mov eax, dword ptr [eax]
// 00702406  85c0                 test eax, eax
// 00702408  8b0d4c978c00         mov ecx, dword ptr [0x8c974c]
// 0070240e  7c0d                 jl 0x70241d
// 00702410  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 00702413  7d08                 jge 0x70241d
// 00702415  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00702418  8b0482               mov eax, dword ptr [edx + eax*4]
// 0070241b  eb02                 jmp 0x70241f
// 0070241d  33c0                 xor eax, eax
// 0070241f  8b5020               mov edx, dword ptr [eax + 0x20]
// 00702422  8b442408             mov eax, dword ptr [esp + 8]
// 00702426  8b00                 mov eax, dword ptr [eax]
// 00702428  85c0                 test eax, eax
// 0070242a  7c0d                 jl 0x702439
// 0070242c  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 0070242f  7d08                 jge 0x702439
// 00702431  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00702434  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00702437  eb02                 jmp 0x70243b
// 00702439  33c0                 xor eax, eax
// 0070243b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0070243e  3bd0                 cmp edx, eax
// 00702440  7e04                 jle 0x702446
// 00702442  83c8ff               or eax, 0xffffffff
// 00702445  c3                   ret 
// 00702446  33c9                 xor ecx, ecx
// 00702448  3bd0                 cmp edx, eax
// 0070244a  0f9cc1               setl cl
// 0070244d  8bc1                 mov eax, ecx
// 0070244f  c3                   ret 

struct CXTPTabPaintManager {
    char pad[0x58];
    int* m_pArray;
    int m_nCount;
};

extern CXTPTabPaintManager* g_pTabPaintManager;

int __cdecl CompareTabIndices(int* pIndex1, int* pIndex2)
{
    int nIndex1 = *pIndex1;
    int nIndex2;
    int nVal1;
    int nVal2;

    if (nIndex1 >= 0 && nIndex1 < g_pTabPaintManager->m_nCount)
        nVal1 = g_pTabPaintManager->m_pArray[nIndex1];
    else
        nVal1 = 0;

    nVal1 = *(int*)((char*)nVal1 + 0x20);

    nIndex2 = *pIndex2;
    if (nIndex2 >= 0 && nIndex2 < g_pTabPaintManager->m_nCount)
        nVal2 = g_pTabPaintManager->m_pArray[nIndex2];
    else
        nVal2 = 0;

    nVal2 = *(int*)((char*)nVal2 + 0x20);

    if (nVal1 > nVal2)
        return -1;
    return nVal1 < nVal2;
}
