// roc 2011-06 008b7dd0  unit: CXTPReportHeaderDragWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b7dd0
//
// 008b7dd0  b8844cad00           mov eax, 0xad4c84
// 008b7dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b7dd0()
{
    return &G;
}
