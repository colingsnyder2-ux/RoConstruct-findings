// roc 2011-06 00841230  unit: CXTPReportRecordItemDateTime  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841230
//
// 00841230  b8c06ac900           mov eax, 0xc96ac0
// 00841235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00841230()
{
    return &G;
}
