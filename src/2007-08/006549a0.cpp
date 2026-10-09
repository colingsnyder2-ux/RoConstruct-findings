// from server: 56% by colin
// roc 2007-08 006549a0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006549a0
//
// 006549a0  56                   push esi
// 006549a1  57                   push edi
// 006549a2  8bf9                 mov edi, ecx
// 006549a4  33f6                 xor esi, esi
// 006549a6  e8c5eeffff           call 0x653870
// 006549ab  85c0                 test eax, eax
// 006549ad  7e23                 jle 0x6549d2
// 006549af  90                   nop 
// 006549b0  85f6                 test esi, esi
// 006549b2  7c2d                 jl 0x6549e1
// 006549b4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006549b7  7d28                 jge 0x6549e1
// 006549b9  8b4724               mov eax, dword ptr [edi + 0x24]
// 006549bc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006549bf  e820b8fdff           call 0x6301e4
// 006549c4  8bcf                 mov ecx, edi
// 006549c6  83c601               add esi, 1
// 006549c9  e8a2eeffff           call 0x653870
// 006549ce  3bf0                 cmp esi, eax
// 006549d0  7cde                 jl 0x6549b0
// 006549d2  6aff                 push -1
// 006549d4  6a00                 push 0
// 006549d6  8d4f20               lea ecx, [edi + 0x20]
// 006549d9  e8d2b00a00           call 0x6ffab0
// 006549de  5f                   pop edi
// 006549df  5e                   pop esi
// 006549e0  c3                   ret 
// 006549e1  e93ab5fdff           jmp 0x62ff20

struct CXTPReportInplaceButtonArray {
    int GetCount();
    void RemoveAt(int index);
    void RemoveAll();
    int m_nCount;
    int m_pData;
    int m_nGrowBy;
    int m_nSize;
};

int CXTPReportInplaceButtonArray::GetCount()
{
    return m_nCount;
}

void CXTPReportInplaceButtonArray::RemoveAt(int index)
{
    if (index < 0 || index >= m_nSize)
        return;
    int* p = (int*)m_pData;
    int item = p[index];
    ((void (__thiscall*)(int))0x6301e4)(item);
}

void CXTPReportInplaceButtonArray::RemoveAll()
{
    int i = 0;
    int count = GetCount();
    while (i < count)
    {
        if (i < 0 || i >= m_nSize)
            return;
        int* p = (int*)m_pData;
        int item = p[i];
        ((void (__thiscall*)(int))0x6301e4)(item);
        i++;
        count = GetCount();
    }
    ((void (__thiscall*)(void*, int, int))0x6ffab0)((char*)this + 0x20, 0, -1);
}
