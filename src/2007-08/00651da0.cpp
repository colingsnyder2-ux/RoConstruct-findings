// from server: 87% by colin
// roc 2007-08 00651da0  unit: CRobloxReportView  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651da0
//
// 00651da0  8b01                 mov eax, dword ptr [ecx]
// 00651da2  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651da8  ffd2                 call edx
// 00651daa  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00651db0  c3                   ret 

struct CRobloxReportView {
    int getValue();
};

int CRobloxReportView::getValue()
{
    int (*fn)(void);
    fn = *(int (**)(void))((*(int*)this) + 0x18c);
    int result = fn();
    return *(int*)(result + 0xb0);
}
