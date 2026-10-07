// roc 2010-06 007df670  unit: CXTPReportRecordItemDateTime  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df670
//
// 007df670  b84c72be00           mov eax, 0xbe724c
// 007df675  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007df670()
{
    return &G;
}
