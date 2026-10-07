// roc 2011-06 008b6d50  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b6d50
//
// 008b6d50  b8d848ad00           mov eax, 0xad48d8
// 008b6d55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b6d50()
{
    return &G;
}
