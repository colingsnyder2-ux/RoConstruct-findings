// from server: 100% by tester
// roc 2008-06 00430bd0  unit: CMainFrame  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430bd0
//
// 00430bd0  803d39d1960000       cmp byte ptr [0x96d139], 0
// 00430bd7  750c                 jne 0x430be5
// 00430bd9  c6810501000001       mov byte ptr [ecx + 0x105], 1
// 00430be0  e90bfeffff           jmp 0x4309f0
// 00430be5  c3                   ret 

extern unsigned char g_flag;
extern void helper();

struct CMainFrame {
    unsigned char pad[261];
    unsigned char field_ed;
    void func();
};

void CMainFrame::func()
{
    if (!g_flag)
    {
        field_ed = 1;
        helper();
    }
}
