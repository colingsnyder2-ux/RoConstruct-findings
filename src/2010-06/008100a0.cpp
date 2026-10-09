// roc 2010-06 008100a0  unit: CXTPStatusBarPane  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008100a0
//
// 008100a0  56                   push esi
// 008100a1  8bf1                 mov esi, ecx
// 008100a3  e8c87ef9ff           call 0x7a7f70
// 008100a8  6a00                 push 0
// 008100aa  6a01                 push 1
// 008100ac  8bce                 mov ecx, esi
// 008100ae  e8bdfcffff           call 0x80fd70
// 008100b3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008100b6  6a00                 push 0
// 008100b8  6a00                 push 0
// 008100ba  50                   push eax
// 008100bb  ff1578ba9e00         call dword ptr [0x9eba78]
// 008100c1  5e                   pop esi
// 008100c2  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSomething@CXTPStatusBar@ns_ROCX000005@@QAEXHHH@Z)

namespace ns_ROCX000005 {
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
