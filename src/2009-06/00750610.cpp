// roc 2009-06 00750610  unit: CXTPReportRecordItemText  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750610
//
// 00750610  b89461a200           mov eax, 0xa26194
// 00750615  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00750610()
{
    return &G;
}
