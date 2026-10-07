// roc 2011-06 008b7fe0  unit: CXTPReportHeaderDropWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b7fe0
//
// 008b7fe0  b8bc4cad00           mov eax, 0xad4cbc
// 008b7fe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b7fe0()
{
    return &G;
}
