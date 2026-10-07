// roc 2007-08 0065e120  unit: CXTPReportControl  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e120
//
// 0065e120  b814897c00           mov eax, 0x7c8914
// 0065e125  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0065e120()
{
    return &G;
}
