// from server: 94% by colin
// roc 2007-08 006a1790  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a1790
//
// 006a1790  8b442404             mov eax, dword ptr [esp + 4]
// 006a1794  85c0                 test eax, eax
// 006a1796  7c0e                 jl 0x6a17a6
// 006a1798  3b4160               cmp eax, dword ptr [ecx + 0x60]
// 006a179b  7d09                 jge 0x6a17a6
// 006a179d  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 006a17a0  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006a17a3  c20400               ret 4
// 006a17a6  e875e7f8ff           call 0x62ff20

extern int __cdecl func_0062ff20();

struct CXTPDockBar_UDOCK_INFO_CArray
{
    int GetAt(int nIndex);
    char pad[0x5c];
    int* m_pData;
    int m_nSize;
};

int CXTPDockBar_UDOCK_INFO_CArray::GetAt(int nIndex)
{
    if (nIndex < 0 || nIndex >= m_nSize)
        return func_0062ff20();
    return m_pData[nIndex];
}
