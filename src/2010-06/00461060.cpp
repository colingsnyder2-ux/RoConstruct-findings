// roc 2010-06 00461060  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461060
//
// 00461060  b8a0e3a000           mov eax, 0xa0e3a0
// 00461065  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00461060()
{
    return &G;
}
