// roc 2011-06 0086d890  unit: CXTPStatusBarPane  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086d890
//
// 0086d890  56                   push esi
// 0086d891  8bf1                 mov esi, ecx
// 0086d893  e896cdf9ff           call 0x80a62e
// 0086d898  6a00                 push 0
// 0086d89a  6a01                 push 1
// 0086d89c  8bce                 mov ecx, esi
// 0086d89e  e8bdfcffff           call 0x86d560
// 0086d8a3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086d8a6  6a00                 push 0
// 0086d8a8  6a00                 push 0
// 0086d8aa  50                   push eax
// 0086d8ab  ff15ec19a400         call dword ptr [0xa419ec]
// 0086d8b1  5e                   pop esi
// 0086d8b2  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSomething@CXTPStatusBar@ns_ROCX000008@@QAEXHHH@Z)

namespace ns_ROCX000008 {
struct CXTPStatusBar {
    void sub_63023E();
    void sub_6933D0(int, int);
    void OnSomething(int, int, int);
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

void CXTPStatusBar::OnSomething(int a, int b, int c)
{
    sub_63023E();
    sub_6933D0(1, 0);
    InvalidateRect(*(void**)((char*)this + 0x20), 0, 0);
}
}
