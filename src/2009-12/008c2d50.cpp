// roc 2009-12 008c2d50  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2d50
//
// 008c2d50  56                   push esi
// 008c2d51  6a00                 push 0
// 008c2d53  8bf1                 mov esi, ecx
// 008c2d55  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c2d58  6a00                 push 0
// 008c2d5a  50                   push eax
// 008c2d5b  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008c2d61  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008c2d64  5e                   pop esi
// 008c2d65  e916fbffff           jmp 0x8c2880
// copied from an identical function in another client (function ?Refresh@CXTPGraphicBitmapPng@ns_ROCX000041@@QAEXXZ)

namespace ns_ROCX000041 {
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
