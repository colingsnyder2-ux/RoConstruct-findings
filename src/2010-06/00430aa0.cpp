// roc 2010-06 00430aa0  unit: COutputView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430aa0
//
// 00430aa0  56                   push esi
// 00430aa1  8bf1                 mov esi, ecx
// 00430aa3  e854733700           call 0x7a7dfc
// 00430aa8  6886000000           push 0x86
// 00430aad  8bce                 mov ecx, esi
// 00430aaf  e83e7a3700           call 0x7a84f2
// 00430ab4  5e                   pop esi
// 00430ab5  c3                   ret 
// copied from an identical function in another client (function ?func@COutputView@ns_ROCX00001d@@QAEXXZ)

namespace ns_ROCX00001d {
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
