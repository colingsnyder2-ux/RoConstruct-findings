// from server: 91% by colin
// roc 2007-08 006db4b0  unit: CXTPDockingPaneAutoHideWnd  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006db4b0
//
// 006db4b0  56                   push esi
// 006db4b1  57                   push edi
// 006db4b2  8bf9                 mov edi, ecx
// 006db4b4  8b4708               mov eax, dword ptr [edi + 8]
// 006db4b7  33f6                 xor esi, esi
// 006db4b9  85c0                 test eax, eax
// 006db4bb  7e28                 jle 0x6db4e5
// 006db4bd  8d4900               lea ecx, [ecx]
// 006db4c0  85f6                 test esi, esi
// 006db4c2  7c2f                 jl 0x6db4f3
// 006db4c4  3bf0                 cmp esi, eax
// 006db4c6  7d2b                 jge 0x6db4f3
// 006db4c8  8b4704               mov eax, dword ptr [edi + 4]
// 006db4cb  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006db4ce  85c9                 test ecx, ecx
// 006db4d0  7409                 je 0x6db4db
// 006db4d2  8b11                 mov edx, dword ptr [ecx]
// 006db4d4  8b4204               mov eax, dword ptr [edx + 4]
// 006db4d7  6a01                 push 1
// 006db4d9  ffd0                 call eax
// 006db4db  8b4708               mov eax, dword ptr [edi + 8]
// 006db4de  83c601               add esi, 1
// 006db4e1  3bf0                 cmp esi, eax
// 006db4e3  7cdb                 jl 0x6db4c0
// 006db4e5  6aff                 push -1
// 006db4e7  6a00                 push 0
// 006db4e9  8bcf                 mov ecx, edi
// 006db4eb  e8c0450200           call 0x6ffab0
// 006db4f0  5f                   pop edi
// 006db4f1  5e                   pop esi
// 006db4f2  c3                   ret 
// 006db4f3  e9284af5ff           jmp 0x62ff20

struct CXTPDockingPaneAutoHideWnd {
    int m_nPad;
    void** m_pArray;
    int m_nCount;
    void RemoveAll();
    void Remove(int nIndex);
};

void CXTPDockingPaneAutoHideWnd::RemoveAll()
{
    int i = 0;
    while (i < m_nCount)
    {
        if (i < 0 || i >= m_nCount)
        {
            extern void sub_0062ff20();
            sub_0062ff20();
            return;
        }
        void* p = m_pArray[i];
        if (p != 0)
        {
            void** vtbl = *(void***)p;
            typedef void (__thiscall *Fn)(void*, int);
            Fn fn = (Fn)vtbl[1];
            fn(p, 1);
        }
        i++;
    }
    Remove(-1);
}
