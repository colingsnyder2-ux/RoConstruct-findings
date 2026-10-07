// roc 2008-06 0074eb20  unit: CXTPReportHyperlinks  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eb20
//
// 0074eb20  b8f0428600           mov eax, 0x8642f0
// 0074eb25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0074eb20()
{
    return &G;
}
