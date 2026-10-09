// roc 2008-06 004613e0  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004613e0
//
// 004613e0  56                   push esi
// 004613e1  8d7158               lea esi, [ecx + 0x58]
// 004613e4  6a01                 push 1
// 004613e6  8bce                 mov ecx, esi
// 004613e8  e8d3ecffff           call 0x4600c0
// 004613ed  6a01                 push 1
// 004613ef  8bce                 mov ecx, esi
// 004613f1  e83af9ffff           call 0x460d30
// 004613f6  5e                   pop esi
// 004613f7  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX000024@@QAEXXZ)

namespace ns_ROCX000024 {
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
