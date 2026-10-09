// roc 2010-06 0046e910  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e910
//
// 0046e910  6a01                 push 1
// 0046e912  83c158               add ecx, 0x58
// 0046e915  e886ebffff           call 0x46d4a0
// 0046e91a  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000020@CScintillaView@ns_ROCX000020@@QAEXXZ)

namespace ns_ROCX000020 {
struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void fn_ROCX000020();
};

void CScintillaView::fn_ROCX000020()
{
    inner.method(1);
}
}
