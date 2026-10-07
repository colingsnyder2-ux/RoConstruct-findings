// roc 2008-06 0074e6b0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074e6b0
//
// 0074e6b0  b800418600           mov eax, 0x864100
// 0074e6b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0074e6b0()
{
    return &G;
}
