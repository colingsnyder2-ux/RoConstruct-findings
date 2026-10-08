// from server: 94% by colin
// roc 2007-08 0068bde0  unit: CXTPTabClientWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068bde0
//
// 0068bde0  8b442404             mov eax, dword ptr [esp + 4]
// 0068bde4  85c0                 test eax, eax
// 0068bde6  7c0e                 jl 0x68bdf6
// 0068bde8  3b4170               cmp eax, dword ptr [ecx + 0x70]
// 0068bdeb  7d09                 jge 0x68bdf6
// 0068bded  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 0068bdf0  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0068bdf3  c20400               ret 4
// 0068bdf6  e82541faff           call 0x62ff20

struct CXTPTabClientWnd {
    int GetItem(int nIndex);
    char pad[0x6c];
    int* m_pItems;
    int m_nCount;
};

extern "C" int __stdcall sub_62FF20();

int CXTPTabClientWnd::GetItem(int nIndex) {
    if (nIndex < 0 || nIndex >= m_nCount)
        return sub_62FF20();
    return m_pItems[nIndex];
}
