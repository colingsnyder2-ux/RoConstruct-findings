// from server: 81% by colin
// roc 2007-08 006d29c0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d29c0
//
// 006d29c0  8b442404             mov eax, dword ptr [esp + 4]
// 006d29c4  85c0                 test eax, eax
// 006d29c6  7c0e                 jl 0x6d29d6
// 006d29c8  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 006d29cb  7d09                 jge 0x6d29d6
// 006d29cd  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006d29d0  8d0481               lea eax, [ecx + eax*4]
// 006d29d3  c20400               ret 4
// 006d29d6  e845d5f5ff           call 0x62ff20

struct CXTPArrayT
{
    int GetAt(int nIndex);
    char pad[0x24];
    int m_pData;
    int m_nSize;
};

int CXTPArrayT::GetAt(int nIndex)
{
    if (nIndex < 0 || nIndex >= m_nSize)
        return 0;
    return m_pData + nIndex * 4;
}
