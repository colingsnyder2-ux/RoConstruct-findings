// roc 2009-06 007c6520  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c6520
//
// 007c6520  b8604f9000           mov eax, 0x904f60
// 007c6525  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c6520()
{
    return &G;
}
