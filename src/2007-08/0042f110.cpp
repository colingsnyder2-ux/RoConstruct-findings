// from server: 100% by colin
// roc 2007-08 0042f110  unit: CMainFrame  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f110
//
// 0042f110  56                   push esi
// 0042f111  8bf1                 mov esi, ecx
// 0042f113  e826112000           call 0x63023e
// 0042f118  80bee000000000       cmp byte ptr [esi + 0xe0], 0
// 0042f11f  7411                 je 0x42f132
// 0042f121  80bee100000000       cmp byte ptr [esi + 0xe1], 0
// 0042f128  7508                 jne 0x42f132
// 0042f12a  8b442408             mov eax, dword ptr [esp + 8]
// 0042f12e  83481803             or dword ptr [eax + 0x18], 3
// 0042f132  5e                   pop esi
// 0042f133  c20400               ret 4

struct CMainFrame {
    char pad[0xe0];
    unsigned char flag0;
    unsigned char flag1;
    void sub_63023e();
    void func(unsigned int* p);
};

void CMainFrame::func(unsigned int* p) {
    sub_63023e();
    if (flag0 != 0 && flag1 == 0) {
        p[6] |= 3;
    }
}
