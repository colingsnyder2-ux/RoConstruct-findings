// roc 2008-06 006c4f80  unit: CXTPReportViewPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4f80
//
// 006c4f80  b8382c8500           mov eax, 0x852c38
// 006c4f85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c4f80()
{
    return &G;
}
