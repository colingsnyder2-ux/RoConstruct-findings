// roc 2007-08 00662370  unit: CXTPReportRecordItemNumber  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662370
//
// 00662370  b86c638b00           mov eax, 0x8b636c
// 00662375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00662370()
{
    return &G;
}
