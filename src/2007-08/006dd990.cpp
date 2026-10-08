// from server: 64% by colin
// roc 2007-08 006dd990  unit: CXTPDockingPaneWindowSelect  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dd990
//
// 006dd990  8b442404             mov eax, dword ptr [esp + 4]
// 006dd994  85c0                 test eax, eax
// 006dd996  7c1a                 jl 0x6dd9b2
// 006dd998  3b81f0000000         cmp eax, dword ptr [ecx + 0xf0]
// 006dd99e  7d12                 jge 0x6dd9b2
// 006dd9a0  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 006dd9a6  8b0482               mov eax, dword ptr [edx + eax*4]
// 006dd9a9  89442404             mov dword ptr [esp + 4], eax
// 006dd9ad  e93eecffff           jmp 0x6dc5f0
// 006dd9b2  33c0                 xor eax, eax
// 006dd9b4  89442404             mov dword ptr [esp + 4], eax
// 006dd9b8  e933ecffff           jmp 0x6dc5f0

struct CXTPDockingPaneWindowSelect {
    int GetAt(int index);
    char pad[0xec];
    int* m_pData;
    int m_nCount;
};

int CXTPDockingPaneWindowSelect::GetAt(int index) {
    if (index < 0 || index >= m_nCount)
        return 0;
    return m_pData[index];
}
