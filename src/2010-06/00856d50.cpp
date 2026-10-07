// roc 2010-06 00856d50  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856d50
//
// 00856d50  b8b09aa600           mov eax, 0xa69ab0
// 00856d55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856d50()
{
    return &G;
}
