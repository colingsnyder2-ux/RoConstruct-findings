// roc 2010-06 007cc240  unit: CXTPReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cc240
//
// 007cc240  b82084a500           mov eax, 0xa58420
// 007cc245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007cc240()
{
    return &G;
}
