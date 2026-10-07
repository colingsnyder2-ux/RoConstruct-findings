// roc 2010-06 007df840  unit: CXTPReportRecordItemVariant  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df840
//
// 007df840  b88872be00           mov eax, 0xbe7288
// 007df845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007df840()
{
    return &G;
}
