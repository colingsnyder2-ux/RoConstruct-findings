// roc 2010-06 00856d80  unit: CXTPReportHyperlinks  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856d80
//
// 00856d80  b8a89ba600           mov eax, 0xa69ba8
// 00856d85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856d80()
{
    return &G;
}
