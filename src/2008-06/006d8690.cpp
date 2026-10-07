// roc 2008-06 006d8690  unit: CXTPReportRecordItemNumber  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8690
//
// 006d8690  b8946f9600           mov eax, 0x966f94
// 006d8695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d8690()
{
    return &G;
}
