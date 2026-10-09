// roc 2009-12 00865c20  unit: CPropertyGridItemBrickColor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865c20
//
// 00865c20  8b442404             mov eax, dword ptr [esp + 4]
// 00865c24  85c0                 test eax, eax
// 00865c26  7c0e                 jl 0x865c36
// 00865c28  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00865c2b  7d09                 jge 0x865c36
// 00865c2d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00865c30  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00865c33  c20400               ret 4
// 00865c36  33c0                 xor eax, eax
// 00865c38  c20400               ret 4
// copied from an identical function in another client (function ?GetAt@CXTPArrayT@ns_ROCX00000c@@QAEHH@Z)

namespace ns_ROCX00000c {
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
