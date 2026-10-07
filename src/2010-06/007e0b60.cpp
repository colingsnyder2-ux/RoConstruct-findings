// roc 2010-06 007e0b60  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0b60
//
// 007e0b60  b878a4a500           mov eax, 0xa5a478
// 007e0b65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e0b60()
{
    return &G;
}
