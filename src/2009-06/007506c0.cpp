// roc 2009-06 007506c0  unit: CXTPReportRecordItemNumber  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007506c0
//
// 007506c0  b8b061a200           mov eax, 0xa261b0
// 007506c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007506c0()
{
    return &G;
}
