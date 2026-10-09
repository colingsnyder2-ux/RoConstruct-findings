// roc 2009-06 00462050  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462050
//
// 00462050  56                   push esi
// 00462051  8d7158               lea esi, [ecx + 0x58]
// 00462054  6a01                 push 1
// 00462056  8bce                 mov ecx, esi
// 00462058  e8d3ecffff           call 0x460d30
// 0046205d  6a01                 push 1
// 0046205f  8bce                 mov ecx, esi
// 00462061  e83af9ffff           call 0x4619a0
// 00462066  5e                   pop esi
// 00462067  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
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
