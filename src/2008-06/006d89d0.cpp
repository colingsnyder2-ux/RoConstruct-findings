// roc 2008-06 006d89d0  unit: CXTPReportRecordItemVariant  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d89d0
//
// 006d89d0  b8ec6f9600           mov eax, 0x966fec
// 006d89d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d89d0()
{
    return &G;
}
