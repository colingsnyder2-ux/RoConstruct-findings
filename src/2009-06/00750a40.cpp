// roc 2009-06 00750a40  unit: CXTPReportRecordItemVariant  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750a40
//
// 00750a40  b80862a200           mov eax, 0xa26208
// 00750a45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00750a40()
{
    return &G;
}
