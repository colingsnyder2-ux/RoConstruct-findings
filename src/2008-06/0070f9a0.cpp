// roc 2008-06 0070f9a0  unit: CXTPStatusBarPane  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070f9a0
//
// 0070f9a0  56                   push esi
// 0070f9a1  8bf1                 mov esi, ecx
// 0070f9a3  e8c012f9ff           call 0x6a0c68
// 0070f9a8  6a00                 push 0
// 0070f9aa  6a01                 push 1
// 0070f9ac  8bce                 mov ecx, esi
// 0070f9ae  e8bdfcffff           call 0x70f670
// 0070f9b3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070f9b6  6a00                 push 0
// 0070f9b8  6a00                 push 0
// 0070f9ba  50                   push eax
// 0070f9bb  ff15182e8000         call dword ptr [0x802e18]
// 0070f9c1  5e                   pop esi
// 0070f9c2  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSomething@CXTPStatusBar@ns_ROCX000006@@QAEXHHH@Z)

namespace ns_ROCX000006 {
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
