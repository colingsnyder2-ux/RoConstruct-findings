// roc 2007-08 006d6e70  unit: CXTPReportHeaderDragWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6e70
//
// 006d6e70  b88c8a7d00           mov eax, 0x7d8a8c
// 006d6e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d6e70()
{
    return &G;
}
