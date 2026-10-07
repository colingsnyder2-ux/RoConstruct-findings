// roc 2007-08 00453510  unit: CRobloxReportView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00453510
//
// 00453510  b8a01d7900           mov eax, 0x791da0
// 00453515  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453510()
{
    return &G;
}
