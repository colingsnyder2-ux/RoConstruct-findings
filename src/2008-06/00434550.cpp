// from server: 100% by tester
// roc 2008-06 00434550  unit: CDeclarationView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00434550
//
// 00434550  56                   push esi
// 00434551  8bf1                 mov esi, ecx
// 00434553  e878c52600           call 0x6a0ad0
// 00434558  68d2000000           push 0xd2
// 0043455d  8bce                 mov ecx, esi
// 0043455f  e8a8cb2600           call 0x6a110c
// 00434564  5e                   pop esi
// 00434565  c3                   ret 

namespace ns_ROCX000012 {
struct COutputView {
    void sub_6300B8();
    void sub_630670(int);
    void func();
};

void COutputView::func() {
    sub_6300B8();
    sub_630670(0xd2);
}
}
