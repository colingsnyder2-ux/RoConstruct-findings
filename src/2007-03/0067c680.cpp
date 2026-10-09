// roc 2007-03 0067c680  unit: seg_00670000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067c680
//
// 0067c680  8b442404             mov eax, dword ptr [esp + 4]
// 0067c684  85c0                 test eax, eax
// 0067c686  7c14                 jl 0x67c69c
// 0067c688  3b819c000000         cmp eax, dword ptr [ecx + 0x9c]
// 0067c68e  7d0c                 jge 0x67c69c
// 0067c690  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 0067c696  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0067c699  c20400               ret 4
// 0067c69c  33c0                 xor eax, eax
// 0067c69e  c20400               ret 4
// copied from an identical function in another client (function ?GetItem@CXTPStatusBar@ns_ROCX00001c@@QAEHH@Z)

namespace ns_ROCX00001c {
struct CXTPStatusBar {
    int GetItem(int nIndex);
    char pad[0x98];
    int* m_pItems;
    int m_nCount;
};

int CXTPStatusBar::GetItem(int nIndex) {
    if (nIndex < 0 || nIndex >= m_nCount)
        return 0;
    return m_pItems[nIndex];
}
}
