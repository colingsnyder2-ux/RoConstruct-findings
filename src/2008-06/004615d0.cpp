// roc 2008-06 004615d0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004615d0
//
// 004615d0  6a01                 push 1
// 004615d2  83c158               add ecx, 0x58
// 004615d5  e846f8ffff           call 0x460e20
// 004615da  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00002d@CScintillaView@ns_ROCX00002d@@QAEXXZ)

namespace ns_ROCX00002d {
struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void fn_ROCX00002d();
};

void CScintillaView::fn_ROCX00002d()
{
    inner.method(1);
}
}
