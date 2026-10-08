// roc 2007-08 006d0fc0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d0fc0
//
// 006d0fc0  b8b07b7d00           mov eax, 0x7d7bb0
// 006d0fc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d0fc0()
{
    return &G;
}
