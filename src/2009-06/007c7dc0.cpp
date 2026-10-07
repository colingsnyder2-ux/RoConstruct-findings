// roc 2009-06 007c7dc0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7dc0
//
// 007c7dc0  b850539000           mov eax, 0x905350
// 007c7dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c7dc0()
{
    return &G;
}
