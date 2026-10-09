// roc 2007-03 00436fb0  unit: seg_00430000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00436fb0
//
// 00436fb0  56                   push esi
// 00436fb1  8bf1                 mov esi, ecx
// 00436fb3  e888751e00           call 0x61e540
// 00436fb8  6886000000           push 0x86
// 00436fbd  8bce                 mov ecx, esi
// 00436fbf  e83a7b1e00           call 0x61eafe
// 00436fc4  5e                   pop esi
// 00436fc5  c3                   ret 
// copied from an identical function in another client (function ?func@COutputView@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
