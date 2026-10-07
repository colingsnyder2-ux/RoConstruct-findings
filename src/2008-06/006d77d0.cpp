// roc 2008-06 006d77d0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d77d0
//
// 006d77d0  b880448500           mov eax, 0x854480
// 006d77d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d77d0()
{
    return &G;
}
