// from server: 74% by colin
// roc 2007-08 0064c7b0  unit: CXTPImageManagerIcon  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064c7b0
//
// 0064c7b0  53                   push ebx
// 0064c7b1  55                   push ebp
// 0064c7b2  56                   push esi
// 0064c7b3  57                   push edi
// 0064c7b4  8bf9                 mov edi, ecx
// 0064c7b6  33f6                 xor esi, esi
// 0064c7b8  397748               cmp dword ptr [edi + 0x48], esi
// 0064c7bb  7e27                 jle 0x64c7e4
// 0064c7bd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0064c7c1  85f6                 test esi, esi
// 0064c7c3  7c31                 jl 0x64c7f6
// 0064c7c5  3b7748               cmp esi, dword ptr [edi + 0x48]
// 0064c7c8  7d2c                 jge 0x64c7f6
// 0064c7ca  8b4744               mov eax, dword ptr [edi + 0x44]
// 0064c7cd  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0064c7d0  55                   push ebp
// 0064c7d1  8bcb                 mov ecx, ebx
// 0064c7d3  e898baffff           call 0x648270
// 0064c7d8  85c0                 test eax, eax
// 0064c7da  7511                 jne 0x64c7ed
// 0064c7dc  83c601               add esi, 1
// 0064c7df  3b7748               cmp esi, dword ptr [edi + 0x48]
// 0064c7e2  7cdd                 jl 0x64c7c1
// 0064c7e4  5f                   pop edi
// 0064c7e5  5e                   pop esi
// 0064c7e6  5d                   pop ebp
// 0064c7e7  33c0                 xor eax, eax
// 0064c7e9  5b                   pop ebx
// 0064c7ea  c20400               ret 4
// 0064c7ed  5f                   pop edi
// 0064c7ee  5e                   pop esi
// 0064c7ef  5d                   pop ebp
// 0064c7f0  8bc3                 mov eax, ebx
// 0064c7f2  5b                   pop ebx
// 0064c7f3  c20400               ret 4
// 0064c7f6  e82537feff           call 0x62ff20

struct CXTPImageManagerIcon;

struct CXTPImageManagerIcon
{
    int Match(CXTPImageManagerIcon* pOther);
};

struct CXTPImageManager
{
    int m_nCount;
    CXTPImageManagerIcon** m_pIcons;

    CXTPImageManagerIcon* Find(CXTPImageManagerIcon* pIcon);
};

CXTPImageManagerIcon* CXTPImageManager::Find(CXTPImageManagerIcon* pIcon)
{
    for (int i = 0; i < m_nCount; i++)
    {
        if (i < 0 || i >= m_nCount)
            __debugbreak();
        CXTPImageManagerIcon* p = m_pIcons[i];
        if (p->Match(pIcon))
            return p;
    }
    return 0;
}
