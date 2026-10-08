// from server: 100% by colin
// roc 2007-08 006f2890  unit: CXTPGraphicBitmapPng  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2890
//
// 006f2890  56                   push esi
// 006f2891  6a00                 push 0
// 006f2893  8bf1                 mov esi, ecx
// 006f2895  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f2898  6a00                 push 0
// 006f289a  50                   push eax
// 006f289b  ff15dcec7700         call dword ptr [0x77ecdc]
// 006f28a1  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006f28a4  5e                   pop esi
// 006f28a5  e986fbffff           jmp 0x6f2430

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
