// from server: 70% by colin
// roc 2007-08 0066c6c0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066c6c0
//
// 0066c6c0  56                   push esi
// 0066c6c1  57                   push edi
// 0066c6c2  8bf9                 mov edi, ecx
// 0066c6c4  33f6                 xor esi, esi
// 0066c6c6  39770c               cmp dword ptr [edi + 0xc], esi
// 0066c6c9  7e29                 jle 0x66c6f4
// 0066c6cb  eb03                 jmp 0x66c6d0
// 0066c6cd  8d4900               lea ecx, [ecx]
// 0066c6d0  85f6                 test esi, esi
// 0066c6d2  7c2f                 jl 0x66c703
// 0066c6d4  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0066c6d7  7d2a                 jge 0x66c703
// 0066c6d9  8b4708               mov eax, dword ptr [edi + 8]
// 0066c6dc  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0066c6df  85c0                 test eax, eax
// 0066c6e1  7409                 je 0x66c6ec
// 0066c6e3  50                   push eax
// 0066c6e4  e87935fcff           call 0x62fc62
// 0066c6e9  83c404               add esp, 4
// 0066c6ec  83c601               add esi, 1
// 0066c6ef  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0066c6f2  7cdc                 jl 0x66c6d0
// 0066c6f4  6aff                 push -1
// 0066c6f6  6a00                 push 0
// 0066c6f8  8d4f04               lea ecx, [edi + 4]
// 0066c6fb  e8b0330900           call 0x6ffab0
// 0066c700  5f                   pop edi
// 0066c701  5e                   pop esi
// 0066c702  c3                   ret 
// 0066c703  e91838fcff           jmp 0x62ff20

struct CXTPToolBar_PAVCToolBarInfo_CArray
{
    int m_nGrowBy;
    int m_nSize;
    int m_nMaxSize;
    void** m_pData;
    void RemoveAll();
};

extern "C" void __cdecl func_0062fc62(void*);
extern "C" void __stdcall func_006ffab0(int, int);
extern "C" void __cdecl func_0062ff20();

void CXTPToolBar_PAVCToolBarInfo_CArray::RemoveAll()
{
    int i = 0;
    while (i < m_nSize)
    {
        if (i < 0 || i >= m_nSize)
        {
            func_0062ff20();
            return;
        }
        void* p = m_pData[i];
        if (p != 0)
        {
            func_0062fc62(p);
        }
        i++;
    }
    func_006ffab0(-1, 0);
}
