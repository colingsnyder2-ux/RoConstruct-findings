// roc 2007-08 006d3f20  unit: CXTPReportRow_Batch  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3f20
//
// 006d3f20  b8b0837d00           mov eax, 0x7d83b0
// 006d3f25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d3f20()
{
    return &G;
}
