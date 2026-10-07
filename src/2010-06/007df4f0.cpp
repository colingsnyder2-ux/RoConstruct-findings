// roc 2010-06 007df4f0  unit: CXTPReportRecordItemNumber  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df4f0
//
// 007df4f0  b83072be00           mov eax, 0xbe7230
// 007df4f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007df4f0()
{
    return &G;
}
