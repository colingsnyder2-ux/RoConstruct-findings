// roc 2009-06 00462270  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462270
//
// 00462270  6a01                 push 1
// 00462272  83c158               add ecx, 0x58
// 00462275  e8f6ebffff           call 0x460e70
// 0046227a  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000016@CScintillaView@ns_ROCX000016@@QAEXXZ)

namespace ns_ROCX000016 {
struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void fn_ROCX000016();
};

void CScintillaView::fn_ROCX000016()
{
    inner.method(1);
}
}
