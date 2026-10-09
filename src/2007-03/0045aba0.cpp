// roc 2007-03 0045aba0  unit: seg_00450000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045aba0
//
// 0045aba0  6a01                 push 1
// 0045aba2  83c158               add ecx, 0x58
// 0045aba5  e816f8ffff           call 0x45a3c0
// 0045abaa  c3                   ret 
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
