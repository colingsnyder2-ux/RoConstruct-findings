// roc 2008-06 0074eaf0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eaf0
//
// 0074eaf0  b8f8418600           mov eax, 0x8641f8
// 0074eaf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0074eaf0()
{
    return &G;
}
