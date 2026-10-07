// roc 2008-06 00750980  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750980
//
// 00750980  b878478600           mov eax, 0x864778
// 00750985  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00750980()
{
    return &G;
}
