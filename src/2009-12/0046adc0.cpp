// roc 2009-12 0046adc0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046adc0
//
// 0046adc0  6a01                 push 1
// 0046adc2  83c158               add ecx, 0x58
// 0046adc5  e8d6f7ffff           call 0x46a5a0
// 0046adca  c3                   ret 
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
