// roc 2009-06 007c7980  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7980
//
// 007c7980  b858529000           mov eax, 0x905258
// 007c7985  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c7980()
{
    return &G;
}
