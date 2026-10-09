// roc 2011-06 0048b220  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b220
//
// 0048b220  6a01                 push 1
// 0048b222  83c158               add ecx, 0x58
// 0048b225  e846ebffff           call 0x489d70
// 0048b22a  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00005e@CScintillaView@ns_ROCX00005e@@QAEXXZ)

namespace ns_ROCX00005e {
struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void fn_ROCX00005e();
};

void CScintillaView::fn_ROCX00005e()
{
    inner.method(1);
}
}
