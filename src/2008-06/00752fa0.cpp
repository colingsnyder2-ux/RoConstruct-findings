// roc 2008-06 00752fa0  unit: CXTPReportTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752fa0
//
// 00752fa0  b8e4498600           mov eax, 0x8649e4
// 00752fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00752fa0()
{
    return &G;
}
