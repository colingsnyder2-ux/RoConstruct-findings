// roc 2010-06 00856910  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856910
//
// 00856910  b8b899a600           mov eax, 0xa699b8
// 00856915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856910()
{
    return &G;
}
