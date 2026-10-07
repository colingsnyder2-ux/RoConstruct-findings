// roc 2009-06 007cb5b0  unit: CXTPReportTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cb5b0
//
// 007cb5b0  b81c5a9000           mov eax, 0x905a1c
// 007cb5b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007cb5b0()
{
    return &G;
}
