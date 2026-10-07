// roc 2010-06 007df450  unit: CXTPReportRecordItemText  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df450
//
// 007df450  b81472be00           mov eax, 0xbe7214
// 007df455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007df450()
{
    return &G;
}
