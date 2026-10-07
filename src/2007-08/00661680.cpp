// roc 2007-08 00661680  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00661680
//
// 00661680  b8c08d7c00           mov eax, 0x7c8dc0
// 00661685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00661680()
{
    return &G;
}
