// roc 2007-08 006d2660  unit: CXTPReportHyperlinks  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2660
//
// 006d2660  b858807d00           mov eax, 0x7d8058
// 006d2665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d2660()
{
    return &G;
}
