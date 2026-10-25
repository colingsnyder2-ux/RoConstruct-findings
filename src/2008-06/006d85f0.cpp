// from server: 100% by auto
// roc 2008-06 006d85f0  unit: CXTPReportRecordItemText  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d85f0
//
// 006d85f0  b8786f9600           mov eax, 0x966f78
// 006d85f5  c3                   ret 

extern char G;

char* func_006d85f0()
{
    return &G;
}
