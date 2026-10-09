// roc 2009-12 0085c0d0  unit: CXTPStatusBarPane  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c0d0
//
// 0085c0d0  56                   push esi
// 0085c0d1  8bf1                 mov esi, ecx
// 0085c0d3  e8587df9ff           call 0x7f3e30
// 0085c0d8  6a00                 push 0
// 0085c0da  6a01                 push 1
// 0085c0dc  8bce                 mov ecx, esi
// 0085c0de  e8bdfcffff           call 0x85bda0
// 0085c0e3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085c0e6  6a00                 push 0
// 0085c0e8  6a00                 push 0
// 0085c0ea  50                   push eax
// 0085c0eb  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0085c0f1  5e                   pop esi
// 0085c0f2  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSomething@CXTPStatusBar@ns_ROCX000018@@QAEXHHH@Z)

namespace ns_ROCX000018 {
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
