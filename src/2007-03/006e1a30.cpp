// roc 2007-03 006e1a30  unit: seg_006e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e1a30
//
// 006e1a30  56                   push esi
// 006e1a31  6a00                 push 0
// 006e1a33  8bf1                 mov esi, ecx
// 006e1a35  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e1a38  6a00                 push 0
// 006e1a3a  50                   push eax
// 006e1a3b  ff1554ee7700         call dword ptr [0x77ee54]
// 006e1a41  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006e1a44  5e                   pop esi
// 006e1a45  e906fbffff           jmp 0x6e1550
// copied from an identical function in another client (function ?Refresh@CXTPGraphicBitmapPng@ns_ROCX000047@@QAEXXZ)

namespace ns_ROCX000047 {
struct CXTPGraphicBitmapPng {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x40];
    int m_nID;
    void Refresh();
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);
extern "C" void __fastcall sub_6F2430(int);

void CXTPGraphicBitmapPng::Refresh()
{
    InvalidateRect(m_hWnd, 0, 0);
    sub_6F2430(m_nID);
}
}
