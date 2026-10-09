// roc 2007-03 004302d0  unit: seg_00430000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004302d0
//
// 004302d0  56                   push esi
// 004302d1  8bf1                 mov esi, ecx
// 004302d3  e8fae31e00           call 0x61e6d2
// 004302d8  80bee000000000       cmp byte ptr [esi + 0xe0], 0
// 004302df  7411                 je 0x4302f2
// 004302e1  80bee100000000       cmp byte ptr [esi + 0xe1], 0
// 004302e8  7508                 jne 0x4302f2
// 004302ea  8b442408             mov eax, dword ptr [esp + 8]
// 004302ee  83481803             or dword ptr [eax + 0x18], 3
// 004302f2  5e                   pop esi
// 004302f3  c20400               ret 4
// copied from an identical function in another client (function ?func@CMainFrame@ns_ROCX000000@@QAEXPAI@Z)

namespace ns_ROCX000000 {
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
}
