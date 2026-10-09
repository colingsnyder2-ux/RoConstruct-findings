// from server: 50% by colin
// roc 2007-08 00716f60  unit: PAVCXTPRibbonGroup::?$CArray  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716f60
//
// 00716f60  53                   push ebx
// 00716f61  56                   push esi
// 00716f62  8bd9                 mov ebx, ecx
// 00716f64  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00716f67  57                   push edi
// 00716f68  33ff                 xor edi, edi
// 00716f6a  85c0                 test eax, eax
// 00716f6c  7e33                 jle 0x716fa1
// 00716f6e  8bff                 mov edi, edi
// 00716f70  85ff                 test edi, edi
// 00716f72  7c11                 jl 0x716f85
// 00716f74  3bf8                 cmp edi, eax
// 00716f76  7d0d                 jge 0x716f85
// 00716f78  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 00716f7b  7d3a                 jge 0x716fb7
// 00716f7d  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00716f80  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00716f83  eb02                 jmp 0x716f87
// 00716f85  33f6                 xor esi, esi
// 00716f87  8b16                 mov edx, dword ptr [esi]
// 00716f89  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00716f8c  8bce                 mov ecx, esi
// 00716f8e  ffd0                 call eax
// 00716f90  8bce                 mov ecx, esi
// 00716f92  e84d92f1ff           call 0x6301e4
// 00716f97  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00716f9a  83c701               add edi, 1
// 00716f9d  3bf8                 cmp edi, eax
// 00716f9f  7ccf                 jl 0x716f70
// 00716fa1  6aff                 push -1
// 00716fa3  6a00                 push 0
// 00716fa5  8d4b20               lea ecx, [ebx + 0x20]
// 00716fa8  e8038bfeff           call 0x6ffab0
// 00716fad  5f                   pop edi
// 00716fae  5e                   pop esi
// 00716faf  8bcb                 mov ecx, ebx
// 00716fb1  5b                   pop ebx
// 00716fb2  e9b9fbffff           jmp 0x716b70
// 00716fb7  e9648ff1ff           jmp 0x62ff20

struct CArray {
    char pad[0x20];
    int m_nSize;
    void** m_pData;
    void RemoveAll();
    void DestructElements(void** p, int n);
    void SetSize(int nNewSize, int nGrowBy);
    void FreeExtra();
};

void CArray::RemoveAll()
{
    int nSize = m_nSize;
    int i;
    for (i = 0; i < nSize; i++)
    {
        void* p;
        if (i >= 0 && i < m_nSize)
        {
            if (i >= m_nSize)
                goto fail;
            p = m_pData[i];
        }
        else
        {
            p = 0;
        }
        (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
        DestructElements(&p, 1);
        nSize = m_nSize;
    }
    SetSize(-1, 0);
    FreeExtra();
    return;
fail:
    FreeExtra();
}
