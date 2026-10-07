// roc 2011-06 00481f40  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00481f40
//
// 00481f40  b8201fa700           mov eax, 0xa71f20
// 00481f45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00481f40()
{
    return &G;
}
