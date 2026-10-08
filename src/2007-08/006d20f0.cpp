// roc 2007-08 006d20f0  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d20f0
//
// 006d20f0  b8287d7d00           mov eax, 0x7d7d28
// 006d20f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d20f0()
{
    return &G;
}
