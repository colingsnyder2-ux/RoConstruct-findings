// roc 2010-06 007df710  unit: CXTPReportRecordItemPreview  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df710
//
// 007df710  b86872be00           mov eax, 0xbe7268
// 007df715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007df710()
{
    return &G;
}
