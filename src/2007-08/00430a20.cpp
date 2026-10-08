// from server: 100% by colin
// roc 2007-08 00430a20  unit: CWrapperView  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430a20
//
// 00430a20  56                   push esi
// 00430a21  8bf1                 mov esi, ecx
// 00430a23  e816f81f00           call 0x63023e
// 00430a28  80bee000000000       cmp byte ptr [esi + 0xe0], 0
// 00430a2f  7420                 je 0x430a51
// 00430a31  80bee100000000       cmp byte ptr [esi + 0xe1], 0
// 00430a38  7517                 jne 0x430a51
// 00430a3a  837c240800           cmp dword ptr [esp + 8], 0
// 00430a3f  7510                 jne 0x430a51
// 00430a41  8bce                 mov ecx, esi
// 00430a43  e8b8fdffff           call 0x430800
// 00430a48  6a07                 push 7
// 00430a4a  8bce                 mov ecx, esi
// 00430a4c  e8f9f41f00           call 0x62ff4a
// 00430a51  5e                   pop esi
// 00430a52  c20800               ret 8

struct CWrapperView {
    char pad[0xe0];
    unsigned char flag0;
    unsigned char flag1;
    void sub_63023E();
    void sub_430800();
    void sub_62FF4A(int);
    void func(int, int);
};

void CWrapperView::func(int a, int b) {
    sub_63023E();
    if (flag0 != 0 && flag1 == 0 && a == 0) {
        sub_430800();
        sub_62FF4A(7);
    }
}
