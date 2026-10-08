// roc 2007-08 006d5e70  unit: CXTPReportTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5e70
//
// 006d5e70  b814867d00           mov eax, 0x7d8614
// 006d5e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d5e70()
{
    return &G;
}
