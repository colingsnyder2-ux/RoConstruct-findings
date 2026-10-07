// roc 2011-06 00830610  unit: CXTPReportControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830610
//
// 00830610  b80048ac00           mov eax, 0xac4800
// 00830615  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00830610()
{
    return &G;
}
