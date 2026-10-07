// roc 2010-06 00856d70  unit: CXTPReportHyperlink  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856d70
//
// 00856d70  b88c9ba600           mov eax, 0xa69b8c
// 00856d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856d70()
{
    return &G;
}
