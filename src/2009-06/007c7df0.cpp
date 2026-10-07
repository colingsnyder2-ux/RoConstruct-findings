// roc 2009-06 007c7df0  unit: CXTPReportHyperlinks  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7df0
//
// 007c7df0  b848549000           mov eax, 0x905448
// 007c7df5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c7df0()
{
    return &G;
}
