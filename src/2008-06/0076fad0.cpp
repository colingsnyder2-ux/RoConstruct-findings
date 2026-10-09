// roc 2008-06 0076fad0  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076fad0
//
// 0076fad0  56                   push esi
// 0076fad1  6a00                 push 0
// 0076fad3  8bf1                 mov esi, ecx
// 0076fad5  8b4620               mov eax, dword ptr [esi + 0x20]
// 0076fad8  6a00                 push 0
// 0076fada  50                   push eax
// 0076fadb  ff15182e8000         call dword ptr [0x802e18]
// 0076fae1  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0076fae4  5e                   pop esi
// 0076fae5  e9c6fbffff           jmp 0x76f6b0
// copied from an identical function in another client (function ?Refresh@CXTPGraphicBitmapPng@ns_ROCX0000d2@@QAEXXZ)

namespace ns_ROCX0000d2 {
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
