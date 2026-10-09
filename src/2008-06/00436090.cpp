// roc 2008-06 00436090  unit: COutputView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436090
//
// 00436090  56                   push esi
// 00436091  8bf1                 mov esi, ecx
// 00436093  e838aa2600           call 0x6a0ad0
// 00436098  6886000000           push 0x86
// 0043609d  8bce                 mov ecx, esi
// 0043609f  e868b02600           call 0x6a110c
// 004360a4  5e                   pop esi
// 004360a5  c3                   ret 
// copied from an identical function in another client (function ?func@COutputView@ns_ROCX000012@@QAEXXZ)

namespace ns_ROCX000012 {
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
