// roc 2010-06 00464690  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00464690
//
// 00464690  b890eaa000           mov eax, 0xa0ea90
// 00464695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00464690()
{
    return &G;
}
