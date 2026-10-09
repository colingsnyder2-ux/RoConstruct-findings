// roc 2008-06 00461600  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461600
//
// 00461600  6a01                 push 1
// 00461602  83c158               add ecx, 0x58
// 00461605  e8f6ebffff           call 0x460200
// 0046160a  c3                   ret 
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
