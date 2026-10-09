// roc 2012-06 0049df20  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049df20
//
// 0049df20  6a01                 push 1
// 0049df22  83c158               add ecx, 0x58
// 0049df25  e886f7ffff           call 0x49d6b0
// 0049df2a  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000017@CScintillaView@ns_ROCX000017@@QAEXXZ)

namespace ns_ROCX000017 {
struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void fn_ROCX000017();
};

void CScintillaView::fn_ROCX000017()
{
    inner.method(1);
}
}
