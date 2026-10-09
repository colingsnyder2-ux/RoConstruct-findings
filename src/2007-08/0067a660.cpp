// from server: 96% by colin
// roc 2007-08 0067a660  unit: CXTPControls  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a660
//
// 0067a660  56                   push esi
// 0067a661  57                   push edi
// 0067a662  8bf1                 mov esi, ecx
// 0067a664  8b7e2c               mov edi, dword ptr [esi + 0x2c]
// 0067a667  83ef01               sub edi, 1
// 0067a66a  7847                 js 0x67a6b3
// 0067a66c  53                   push ebx
// 0067a66d  8d4900               lea ecx, [ecx]
// 0067a670  85ff                 test edi, edi
// 0067a672  7c0d                 jl 0x67a681
// 0067a674  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0067a677  7d08                 jge 0x67a681
// 0067a679  8b4628               mov eax, dword ptr [esi + 0x28]
// 0067a67c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0067a67f  eb02                 jmp 0x67a683
// 0067a681  33db                 xor ebx, ebx
// 0067a683  8b16                 mov edx, dword ptr [esi]
// 0067a685  8b4268               mov eax, dword ptr [edx + 0x68]
// 0067a688  53                   push ebx
// 0067a689  8bce                 mov ecx, esi
// 0067a68b  ffd0                 call eax
// 0067a68d  85c0                 test eax, eax
// 0067a68f  751c                 jne 0x67a6ad
// 0067a691  6a01                 push 1
// 0067a693  57                   push edi
// 0067a694  8d4e24               lea ecx, [esi + 0x24]
// 0067a697  e814800500           call 0x6d26b0
// 0067a69c  8b16                 mov edx, dword ptr [esi]
// 0067a69e  8b4264               mov eax, dword ptr [edx + 0x64]
// 0067a6a1  53                   push ebx
// 0067a6a2  8bce                 mov ecx, esi
// 0067a6a4  ffd0                 call eax
// 0067a6a6  8bcb                 mov ecx, ebx
// 0067a6a8  e8375bfbff           call 0x6301e4
// 0067a6ad  83ef01               sub edi, 1
// 0067a6b0  79be                 jns 0x67a670
// 0067a6b2  5b                   pop ebx
// 0067a6b3  5f                   pop edi
// 0067a6b4  5e                   pop esi
// 0067a6b5  c3                   ret 

struct CXTPControls {
    void RemoveAt(int index);
    void Remove(int index);
    int GetCount() const;
    void *GetAt(int index) const;
    void OnRemoved(void *pItem);
    void OnBeforeRemove(void *pItem);
    void RemoveAll();
    int m_nUnknown0;
    int m_nUnknown1;
    int m_nUnknown2;
    int m_nUnknown3;
    int m_nUnknown4;
    int m_nUnknown5;
    int m_nUnknown6;
    int m_nUnknown7;
    int m_nUnknown8;
    int m_nUnknown9;
    void **m_pItems;
    int m_nCount;
};

extern "C" void __stdcall sub_6301e4(void *pItem);
extern "C" void __stdcall sub_6d26b0(void *pThis, int index, int flag);

void CXTPControls::RemoveAll()
{
    int i = m_nCount - 1;
    if (i >= 0)
    {
        do
        {
            void *pItem;
            if (i >= 0 && i < m_nCount)
                pItem = m_pItems[i];
            else
                pItem = 0;

            if (!((int (__thiscall *)(CXTPControls *, void *))*(void **)(*(int *)this + 0x68))(this, pItem))
            {
                sub_6d26b0((char *)this + 0x24, i, 1);
                ((void (__thiscall *)(CXTPControls *, void *))*(void **)(*(int *)this + 0x64))(this, pItem);
                sub_6301e4(pItem);
            }
            i--;
        } while (i >= 0);
    }
}
