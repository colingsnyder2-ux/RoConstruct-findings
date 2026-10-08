// from server: 100% by colin
// roc 2007-08 00436fe0  unit: COutputView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00436fe0
//
// 00436fe0  56                   push esi
// 00436fe1  8bf1                 mov esi, ecx
// 00436fe3  e8d0901f00           call 0x6300b8
// 00436fe8  6886000000           push 0x86
// 00436fed  8bce                 mov ecx, esi
// 00436fef  e87c961f00           call 0x630670
// 00436ff4  5e                   pop esi
// 00436ff5  c3                   ret 

struct COutputView {
    void sub_6300B8();
    void sub_630670(int);
    void func();
};

void COutputView::func() {
    sub_6300B8();
    sub_630670(0x86);
}
