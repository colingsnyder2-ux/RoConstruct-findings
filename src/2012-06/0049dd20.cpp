// roc 2012-06 0049dd20  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dd20
//
// 0049dd20  56                   push esi
// 0049dd21  8d7158               lea esi, [ecx + 0x58]
// 0049dd24  6a01                 push 1
// 0049dd26  8bce                 mov ecx, esi
// 0049dd28  e8a3ecffff           call 0x49c9d0
// 0049dd2d  6a01                 push 1
// 0049dd2f  8bce                 mov ecx, esi
// 0049dd31  e84af9ffff           call 0x49d680
// 0049dd36  5e                   pop esi
// 0049dd37  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
