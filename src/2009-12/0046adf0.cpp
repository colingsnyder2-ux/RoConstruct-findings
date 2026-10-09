// roc 2009-12 0046adf0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046adf0
//
// 0046adf0  6a01                 push 1
// 0046adf2  83c158               add ecx, 0x58
// 0046adf5  e836f8ffff           call 0x46a630
// 0046adfa  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000024@CScintillaView@ns_ROCX000024@@QAEXXZ)

namespace ns_ROCX000024 {
struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void fn_ROCX000024();
};

void CScintillaView::fn_ROCX000024()
{
    inner.method(1);
}
}
