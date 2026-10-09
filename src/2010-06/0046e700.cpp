// roc 2010-06 0046e700  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e700
//
// 0046e700  56                   push esi
// 0046e701  8d7158               lea esi, [ecx + 0x58]
// 0046e704  6a01                 push 1
// 0046e706  8bce                 mov ecx, esi
// 0046e708  e8c3ecffff           call 0x46d3d0
// 0046e70d  6a01                 push 1
// 0046e70f  8bce                 mov ecx, esi
// 0046e711  e82af9ffff           call 0x46e040
// 0046e716  5e                   pop esi
// 0046e717  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX000017@@QAEXXZ)

namespace ns_ROCX000017 {
struct Sub {
    void f1(int);
    void f2(int);
};

struct CScintillaView {
    char pad0[0x58];
    Sub sub;
    void method();
};

void CScintillaView::method()
{
    sub.f1(1);
    sub.f2(1);
}
}
