// roc 2009-06 007e8200  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e8200
//
// 007e8200  56                   push esi
// 007e8201  6a00                 push 0
// 007e8203  8bf1                 mov esi, ecx
// 007e8205  8b4620               mov eax, dword ptr [esi + 0x20]
// 007e8208  6a00                 push 0
// 007e820a  50                   push eax
// 007e820b  ff157cee8900         call dword ptr [0x89ee7c]
// 007e8211  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007e8214  5e                   pop esi
// 007e8215  e9c6fbffff           jmp 0x7e7de0
// copied from an identical function in another client (function ?Refresh@CXTPGraphicBitmapPng@ns_ROCX0000b0@@QAEXXZ)

namespace ns_ROCX0000b0 {
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
