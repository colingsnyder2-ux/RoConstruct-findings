// roc 2007-08 00662500  unit: CXTPReportRecordItemDateTime  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662500
//
// 00662500  b888638b00           mov eax, 0x8b6388
// 00662505  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00662500()
{
    return &G;
}
