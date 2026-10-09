// roc 2009-12 0046abf0  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046abf0
//
// 0046abf0  56                   push esi
// 0046abf1  8d7158               lea esi, [ecx + 0x58]
// 0046abf4  6a01                 push 1
// 0046abf6  8bce                 mov ecx, esi
// 0046abf8  e8d3ecffff           call 0x4698d0
// 0046abfd  6a01                 push 1
// 0046abff  8bce                 mov ecx, esi
// 0046ac01  e83af9ffff           call 0x46a540
// 0046ac06  5e                   pop esi
// 0046ac07  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX00001b@@QAEXXZ)

namespace ns_ROCX00001b {
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
