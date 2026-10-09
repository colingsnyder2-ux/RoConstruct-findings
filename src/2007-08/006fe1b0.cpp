// from server: 69% by colin
// roc 2007-08 006fe1b0  unit: CXTPTabManagerItem  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe1b0
//
// 006fe1b0  56                   push esi
// 006fe1b1  57                   push edi
// 006fe1b2  8bf9                 mov edi, ecx
// 006fe1b4  33f6                 xor esi, esi
// 006fe1b6  397774               cmp dword ptr [edi + 0x74], esi
// 006fe1b9  7e28                 jle 0x6fe1e3
// 006fe1bb  eb03                 jmp 0x6fe1c0
// 006fe1bd  8d4900               lea ecx, [ecx]
// 006fe1c0  85f6                 test esi, esi
// 006fe1c2  7c2e                 jl 0x6fe1f2
// 006fe1c4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 006fe1c7  7d29                 jge 0x6fe1f2
// 006fe1c9  8b4770               mov eax, dword ptr [edi + 0x70]
// 006fe1cc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006fe1cf  85c9                 test ecx, ecx
// 006fe1d1  7408                 je 0x6fe1db
// 006fe1d3  8b11                 mov edx, dword ptr [ecx]
// 006fe1d5  8b02                 mov eax, dword ptr [edx]
// 006fe1d7  6a01                 push 1
// 006fe1d9  ffd0                 call eax
// 006fe1db  83c601               add esi, 1
// 006fe1de  3b7774               cmp esi, dword ptr [edi + 0x74]
// 006fe1e1  7cdd                 jl 0x6fe1c0
// 006fe1e3  6aff                 push -1
// 006fe1e5  6a00                 push 0
// 006fe1e7  8d4f6c               lea ecx, [edi + 0x6c]
// 006fe1ea  e8c1180000           call 0x6ffab0
// 006fe1ef  5f                   pop edi
// 006fe1f0  5e                   pop esi
// 006fe1f1  c3                   ret 
// 006fe1f2  e9291df3ff           jmp 0x62ff20

struct CXTPTabManagerItem
{
    int m_nCount;
    void* m_pArray;
    int m_nSomething;
    void RemoveAll();
};

void CXTPTabManagerItem::RemoveAll()
{
    int i = 0;
    if (m_nCount > 0)
    {
        do
        {
            if (i < 0 || i >= m_nCount)
                break;
            void* p = ((void**)m_pArray)[i];
            if (p)
            {
                void** vtbl = *(void***)p;
                ((void (__thiscall*)(void*, int))vtbl[0])(p, 1);
            }
            i++;
        } while (i < m_nCount);
    }
    ((void (__thiscall*)(void*, int, int))0x6ffab0)((char*)this + 0x6c, 0, -1);
}
