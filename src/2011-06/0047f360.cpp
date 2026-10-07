// roc 2011-06 0047f360  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047f360
//
// 0047f360  b8b418a700           mov eax, 0xa718b4
// 0047f365  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047f360()
{
    return &G;
}
