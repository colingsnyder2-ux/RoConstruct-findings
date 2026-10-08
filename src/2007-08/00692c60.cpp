// from server: 100% by colin
// roc 2007-08 00692c60  unit: CXTPStatusBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692c60
//
// 00692c60  8b442404             mov eax, dword ptr [esp + 4]
// 00692c64  85c0                 test eax, eax
// 00692c66  7c14                 jl 0x692c7c
// 00692c68  3b819c000000         cmp eax, dword ptr [ecx + 0x9c]
// 00692c6e  7d0c                 jge 0x692c7c
// 00692c70  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 00692c76  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00692c79  c20400               ret 4
// 00692c7c  33c0                 xor eax, eax
// 00692c7e  c20400               ret 4

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
