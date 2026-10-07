// roc 2011-06 00841010  unit: CXTPReportRecordItemText  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841010
//
// 00841010  b8886ac900           mov eax, 0xc96a88
// 00841015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00841010()
{
    return &G;
}
