// roc 2009-06 007c7de0  unit: CXTPReportHyperlink  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7de0
//
// 007c7de0  b82c549000           mov eax, 0x90542c
// 007c7de5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c7de0()
{
    return &G;
}
