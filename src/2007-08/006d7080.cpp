// roc 2007-08 006d7080  unit: CXTPReportHeaderDropWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7080
//
// 006d7080  b8c48a7d00           mov eax, 0x7d8ac4
// 006d7085  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d7080()
{
    return &G;
}
