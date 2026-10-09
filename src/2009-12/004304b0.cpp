// roc 2009-12 004304b0  unit: COutputView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004304b0
//
// 004304b0  56                   push esi
// 004304b1  8bf1                 mov esi, ecx
// 004304b3  e804383c00           call 0x7f3cbc
// 004304b8  6886000000           push 0x86
// 004304bd  8bce                 mov ecx, esi
// 004304bf  e8ee3e3c00           call 0x7f43b2
// 004304c4  5e                   pop esi
// 004304c5  c3                   ret 
// copied from an identical function in another client (function ?func@COutputView@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct COutputView {
    void sub_6300B8();
    void sub_630670(int);
    void func();
};

void COutputView::func() {
    sub_6300B8();
    sub_630670(0x86);
}
}
