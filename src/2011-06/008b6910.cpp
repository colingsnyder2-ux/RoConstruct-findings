// roc 2011-06 008b6910  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b6910
//
// 008b6910  b8e047ad00           mov eax, 0xad47e0
// 008b6915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b6910()
{
    return &G;
}
