// roc 2011-06 0047f370  unit: CRobloxReportDocView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047f370
//
// 0047f370  b8d018a700           mov eax, 0xa718d0
// 0047f375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047f370()
{
    return &G;
}
