// roc 2008-06 006d88b0  unit: CXTPReportRecordItemPreview  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d88b0
//
// 006d88b0  b8cc6f9600           mov eax, 0x966fcc
// 006d88b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d88b0()
{
    return &G;
}
