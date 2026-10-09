// roc 2009-06 00781070  unit: CXTPStatusBarPane  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781070
//
// 00781070  56                   push esi
// 00781071  8bf1                 mov esi, ecx
// 00781073  e8907ff9ff           call 0x719008
// 00781078  6a00                 push 0
// 0078107a  6a01                 push 1
// 0078107c  8bce                 mov ecx, esi
// 0078107e  e8bdfcffff           call 0x780d40
// 00781083  8b4620               mov eax, dword ptr [esi + 0x20]
// 00781086  6a00                 push 0
// 00781088  6a00                 push 0
// 0078108a  50                   push eax
// 0078108b  ff157cee8900         call dword ptr [0x89ee7c]
// 00781091  5e                   pop esi
// 00781092  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSomething@CXTPStatusBar@ns_ROCX00000a@@QAEXHHH@Z)

namespace ns_ROCX00000a {
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
