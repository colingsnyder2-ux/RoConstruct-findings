// from server: 81% by colin
// roc 2007-08 00699220  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699220
//
// 00699220  8b442404             mov eax, dword ptr [esp + 4]
// 00699224  85c0                 test eax, eax
// 00699226  7c0e                 jl 0x699236
// 00699228  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0069922b  7d09                 jge 0x699236
// 0069922d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00699230  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00699233  c20400               ret 4
// 00699236  e8e56cf9ff           call 0x62ff20

struct CXTPArrayT
{
    int GetAt(int nIndex);
    int m_nCount;      // 0x24? no
    int m_pData;       // placeholder
};

int CXTPArrayT::GetAt(int nIndex)
{
    if (nIndex < 0 || nIndex >= *(int*)((char*)this + 0x28))
        return 0;
    return ((int*)(*(int*)((char*)this + 0x24)))[nIndex];
}
