// roc 2010-06 00857ed0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857ed0
//
// 00857ed0  b8109fa600           mov eax, 0xa69f10
// 00857ed5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00857ed0()
{
    return &G;
}
