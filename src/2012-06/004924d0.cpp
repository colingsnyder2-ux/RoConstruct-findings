// roc 2012-06 004924d0  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004924d0
//
// 004924d0  b858dfb500           mov eax, 0xb5df58
// 004924d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004924d0()
{
    return &G;
}
