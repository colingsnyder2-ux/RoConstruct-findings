// roc 2009-06 007c8f90  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c8f90
//
// 007c8f90  b8b0579000           mov eax, 0x9057b0
// 007c8f95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c8f90()
{
    return &G;
}
