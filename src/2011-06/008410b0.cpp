// roc 2011-06 008410b0  unit: CXTPReportRecordItemNumber  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008410b0
//
// 008410b0  b8a46ac900           mov eax, 0xc96aa4
// 008410b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008410b0()
{
    return &G;
}
