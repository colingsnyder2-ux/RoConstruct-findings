// roc 2007-03 00624f80  unit: seg_00620000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624f80
//
// 00624f80  53                   push ebx
// 00624f81  8b1dccd07700         mov ebx, dword ptr [0x77d0cc]
// 00624f87  56                   push esi
// 00624f88  8bf1                 mov esi, ecx
// 00624f8a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00624f8e  7417                 je 0x624fa7
// 00624f90  8b06                 mov eax, dword ptr [esi]
// 00624f92  85c0                 test eax, eax
// 00624f94  7407                 je 0x624f9d
// 00624f96  50                   push eax
// 00624f97  ff15f8ed7700         call dword ptr [0x77edf8]
// 00624f9d  8b4604               mov eax, dword ptr [esi + 4]
// 00624fa0  85c0                 test eax, eax
// 00624fa2  7403                 je 0x624fa7
// 00624fa4  50                   push eax
// 00624fa5  ffd3                 call ebx
// 00624fa7  8b4608               mov eax, dword ptr [esi + 8]
// 00624faa  85c0                 test eax, eax
// 00624fac  7403                 je 0x624fb1
// 00624fae  50                   push eax
// 00624faf  ffd3                 call ebx
// 00624fb1  c70600000000         mov dword ptr [esi], 0
// 00624fb7  c7460400000000       mov dword ptr [esi + 4], 0
// 00624fbe  c7460800000000       mov dword ptr [esi + 8], 0
// 00624fc5  5e                   pop esi
// 00624fc6  5b                   pop ebx
// 00624fc7  c3                   ret 
// copied from an identical function in another client (function ?Clear@CXTPCommandBar@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
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
}
