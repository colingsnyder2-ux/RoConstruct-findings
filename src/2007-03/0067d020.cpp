// roc 2007-03 0067d020  unit: seg_00670000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067d020
//
// 0067d020  56                   push esi
// 0067d021  8bf1                 mov esi, ecx
// 0067d023  e8aa16faff           call 0x61e6d2
// 0067d028  6a00                 push 0
// 0067d02a  6a01                 push 1
// 0067d02c  8bce                 mov ecx, esi
// 0067d02e  e8bdfdffff           call 0x67cdf0
// 0067d033  8b4620               mov eax, dword ptr [esi + 0x20]
// 0067d036  6a00                 push 0
// 0067d038  6a00                 push 0
// 0067d03a  50                   push eax
// 0067d03b  ff1554ee7700         call dword ptr [0x77ee54]
// 0067d041  5e                   pop esi
// 0067d042  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSomething@CXTPStatusBar@ns_ROCX000001@@QAEXHHH@Z)

namespace ns_ROCX000001 {
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
