// roc 2009-06 00462220  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462220
//
// 00462220  6a01                 push 1
// 00462222  83c158               add ecx, 0x58
// 00462225  e806f8ffff           call 0x461a30
// 0046222a  c3                   ret 
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
