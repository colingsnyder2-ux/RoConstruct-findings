// roc 2011-06 008b54b0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b54b0
//
// 008b54b0  b8e844ad00           mov eax, 0xad44e8
// 008b54b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b54b0()
{
    return &G;
}
