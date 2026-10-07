// roc 2008-06 00754020  unit: CXTPReportHeaderDragWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754020
//
// 00754020  b8644d8600           mov eax, 0x864d64
// 00754025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00754020()
{
    return &G;
}
