// roc 2010-06 0085b790  unit: CXTPReportHeaderDropWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085b790
//
// 0085b790  b834a5a600           mov eax, 0xa6a534
// 0085b795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085b790()
{
    return &G;
}
