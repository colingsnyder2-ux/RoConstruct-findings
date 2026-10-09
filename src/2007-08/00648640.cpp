// from server: 100% by colin
// roc 2007-08 00648640  unit: CXTPCommandBar  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648640
//
// 00648640  53                   push ebx
// 00648641  8b1dc8d07700         mov ebx, dword ptr [0x77d0c8]
// 00648647  56                   push esi
// 00648648  8bf1                 mov esi, ecx
// 0064864a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0064864e  7417                 je 0x648667
// 00648650  8b06                 mov eax, dword ptr [esi]
// 00648652  85c0                 test eax, eax
// 00648654  7407                 je 0x64865d
// 00648656  50                   push eax
// 00648657  ff1538ed7700         call dword ptr [0x77ed38]
// 0064865d  8b4604               mov eax, dword ptr [esi + 4]
// 00648660  85c0                 test eax, eax
// 00648662  7403                 je 0x648667
// 00648664  50                   push eax
// 00648665  ffd3                 call ebx
// 00648667  8b4608               mov eax, dword ptr [esi + 8]
// 0064866a  85c0                 test eax, eax
// 0064866c  7403                 je 0x648671
// 0064866e  50                   push eax
// 0064866f  ffd3                 call ebx
// 00648671  c70600000000         mov dword ptr [esi], 0
// 00648677  c7460400000000       mov dword ptr [esi + 4], 0
// 0064867e  c7460800000000       mov dword ptr [esi + 8], 0
// 00648685  5e                   pop esi
// 00648686  5b                   pop ebx
// 00648687  c3                   ret 

extern "C" {
    __declspec(dllimport) int __stdcall DestroyIcon(void*);
    __declspec(dllimport) int __stdcall DeleteObject(void*);
}

struct CXTPCommandBar {
    void* m_pData;
    void* m_pData2;
    void* m_pData3;
    int m_nCount;
    void Clear();
};

void CXTPCommandBar::Clear() {
    if (m_nCount != 0) {
        if (m_pData != 0) {
            DeleteObject(m_pData);
        }
        if (m_pData2 != 0) {
            DestroyIcon(m_pData2);
        }
    }
    if (m_pData3 != 0) {
        DestroyIcon(m_pData3);
    }
    m_pData = 0;
    m_pData2 = 0;
    m_pData3 = 0;
}
