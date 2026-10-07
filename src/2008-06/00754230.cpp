// roc 2008-06 00754230  unit: CXTPReportHeaderDropWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754230
//
// 00754230  b89c4d8600           mov eax, 0x864d9c
// 00754235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00754230()
{
    return &G;
}
