// roc 2012-06 0044c5b0  unit: COutputView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c5b0
//
// 0044c5b0  56                   push esi
// 0044c5b1  8bf1                 mov esi, ecx
// 0044c5b3  e8ac5f5300           call 0x982564
// 0044c5b8  6886000000           push 0x86
// 0044c5bd  8bce                 mov ecx, esi
// 0044c5bf  e878665300           call 0x982c3c
// 0044c5c4  5e                   pop esi
// 0044c5c5  c3                   ret 
// copied from an identical function in another client (function ?func@COutputView@ns_ROCX000014@@QAEXXZ)

namespace ns_ROCX000014 {
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
