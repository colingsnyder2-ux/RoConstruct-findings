// from DeepSeek/server: 100% by colin
// roc 2007-08 004356b0  unit: CDeclarationView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004356b0
//
// 004356b0  56                   push esi
// 004356b1  8bf1                 mov esi, ecx
// 004356b3  e800aa1f00           call 0x6300b8
// 004356b8  68d2000000           push 0xd2
// 004356bd  8bce                 mov ecx, esi
// 004356bf  e8acaf1f00           call 0x630670
// 004356c4  5e                   pop esi
// 004356c5  c3                   ret 

struct CDeclarationView {
    void method_6300b8();
    void method_630670(int);
    void sub_4356b0();
};

void CDeclarationView::sub_4356b0()
{
    method_6300b8();
    method_630670(0xd2);
}
