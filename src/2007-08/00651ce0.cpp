// roc 2007-08 00651ce0  unit: CXTPReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651ce0
//
// 00651ce0  b824777c00           mov eax, 0x7c7724
// 00651ce5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00651ce0()
{
    return &G;
}
