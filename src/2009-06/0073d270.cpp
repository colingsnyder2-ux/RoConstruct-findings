// roc 2009-06 0073d270  unit: CXTPReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073d270
//
// 0073d270  b86c3c8f00           mov eax, 0x8f3c6c
// 0073d275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0073d270()
{
    return &G;
}
