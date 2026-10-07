// roc 2008-06 0074eb10  unit: CXTPReportHyperlink  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eb10
//
// 0074eb10  b8d4428600           mov eax, 0x8642d4
// 0074eb15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0074eb10()
{
    return &G;
}
