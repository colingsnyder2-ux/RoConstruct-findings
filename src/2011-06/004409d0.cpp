// roc 2011-06 004409d0  unit: COutputView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004409d0
//
// 004409d0  56                   push esi
// 004409d1  8bf1                 mov esi, ecx
// 004409d3  e8e29a3c00           call 0x80a4ba
// 004409d8  6886000000           push 0x86
// 004409dd  8bce                 mov ecx, esi
// 004409df  e8d2a13c00           call 0x80abb6
// 004409e4  5e                   pop esi
// 004409e5  c3                   ret 
// copied from an identical function in another client (function ?func@COutputView@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
