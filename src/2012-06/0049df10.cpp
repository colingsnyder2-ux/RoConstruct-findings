// roc 2012-06 0049df10  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049df10
//
// 0049df10  6a01                 push 1
// 0049df12  83c158               add ecx, 0x58
// 0049df15  e856f8ffff           call 0x49d770
// 0049df1a  c3                   ret 
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
