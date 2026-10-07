// roc 2008-06 0074d260  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d260
//
// 0074d260  b8083e8600           mov eax, 0x863e08
// 0074d265  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0074d260()
{
    return &G;
}
