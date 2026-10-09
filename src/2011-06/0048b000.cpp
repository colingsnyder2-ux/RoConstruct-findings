// roc 2011-06 0048b000  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b000
//
// 0048b000  56                   push esi
// 0048b001  8d7158               lea esi, [ecx + 0x58]
// 0048b004  6a01                 push 1
// 0048b006  8bce                 mov ecx, esi
// 0048b008  e893ecffff           call 0x489ca0
// 0048b00d  6a01                 push 1
// 0048b00f  8bce                 mov ecx, esi
// 0048b011  e83af9ffff           call 0x48a950
// 0048b016  5e                   pop esi
// 0048b017  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX000055@@QAEXXZ)

namespace ns_ROCX000055 {
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
