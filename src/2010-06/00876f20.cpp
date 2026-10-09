// roc 2010-06 00876f20  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00876f20
//
// 00876f20  56                   push esi
// 00876f21  6a00                 push 0
// 00876f23  8bf1                 mov esi, ecx
// 00876f25  8b4620               mov eax, dword ptr [esi + 0x20]
// 00876f28  6a00                 push 0
// 00876f2a  50                   push eax
// 00876f2b  ff1578ba9e00         call dword ptr [0x9eba78]
// 00876f31  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00876f34  5e                   pop esi
// 00876f35  e986fbffff           jmp 0x876ac0
// copied from an identical function in another client (function ?Refresh@CXTPGraphicBitmapPng@ns_ROCX0000ba@@QAEXXZ)

namespace ns_ROCX0000ba {
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
