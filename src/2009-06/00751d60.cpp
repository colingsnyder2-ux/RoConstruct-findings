// roc 2009-06 00751d60  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00751d60
//
// 00751d60  b8e85c8f00           mov eax, 0x8f5ce8
// 00751d65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00751d60()
{
    return &G;
}
