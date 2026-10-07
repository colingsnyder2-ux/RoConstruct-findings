// roc 2008-06 00457010  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457010
//
// 00457010  b8b0878100           mov eax, 0x8187b0
// 00457015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00457010()
{
    return &G;
}
