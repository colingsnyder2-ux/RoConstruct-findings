// roc 2008-06 004615f0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004615f0
//
// 004615f0  6a01                 push 1
// 004615f2  83c158               add ecx, 0x58
// 004615f5  e896ebffff           call 0x460190
// 004615fa  c3                   ret 
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
