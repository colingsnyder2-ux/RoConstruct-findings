// roc 2010-06 008554b0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008554b0
//
// 008554b0  b8c096a600           mov eax, 0xa696c0
// 008554b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008554b0()
{
    return &G;
}
