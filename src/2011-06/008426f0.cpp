// roc 2011-06 008426f0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008426f0
//
// 008426f0  b8c060ac00           mov eax, 0xac60c0
// 008426f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008426f0()
{
    return &G;
}
