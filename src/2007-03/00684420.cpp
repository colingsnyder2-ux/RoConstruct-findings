// roc 2007-03 00684420  unit: seg_00680000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00684420
//
// 00684420  8b442404             mov eax, dword ptr [esp + 4]
// 00684424  85c0                 test eax, eax
// 00684426  7c0e                 jl 0x684436
// 00684428  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0068442b  7d09                 jge 0x684436
// 0068442d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00684430  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00684433  c20400               ret 4
// 00684436  33c0                 xor eax, eax
// 00684438  c20400               ret 4
// copied from an identical function in another client (function ?GetAt@CXTPArrayT@ns_ROCX000013@@QAEHH@Z)

namespace ns_ROCX000013 {
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
}
