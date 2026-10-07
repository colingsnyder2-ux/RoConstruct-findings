// roc 2007-08 00453530  unit: CRobloxReportPaneView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00453530
//
// 00453530  b8d81d7900           mov eax, 0x791dd8
// 00453535  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453530()
{
    return &G;
}
