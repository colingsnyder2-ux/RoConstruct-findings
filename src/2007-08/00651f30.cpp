// roc 2007-08 00651f30  unit: CXTPReportViewPrintOptions  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00651f30
//
// 00651f30  b840777c00           mov eax, 0x7c7740
// 00651f35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00651f30()
{
    return &G;
}
