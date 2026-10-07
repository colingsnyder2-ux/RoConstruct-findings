// roc 2011-06 008b8030  unit: CXTPReportHyperlink  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8030
//
// 008b8030  b8544dad00           mov eax, 0xad4d54
// 008b8035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b8030()
{
    return &G;
}
