// from server: 100% by colin
// roc 2007-08 00651d00  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651d00
//
// 00651d00  8b542404             mov edx, dword ptr [esp + 4]
// 00651d04  83fa01               cmp edx, 1
// 00651d07  750a                 jne 0x651d13
// 00651d09  8b81b8020000         mov eax, dword ptr [ecx + 0x2b8]
// 00651d0f  85c0                 test eax, eax
// 00651d11  7509                 jne 0x651d1c
// 00651d13  89542404             mov dword ptr [esp + 4], edx
// 00651d17  e93ce3fdff           jmp 0x630058
// 00651d1c  c20400               ret 4

struct CRobloxReportView {
    char pad[0x2b8];
    int m_field;
    int sub_630058(int);
    int func(int);
};

int CRobloxReportView::func(int arg)
{
    if (arg == 1) {
        int v = m_field;
        if (v != 0)
            return v;
    }
    return sub_630058(arg);
}
