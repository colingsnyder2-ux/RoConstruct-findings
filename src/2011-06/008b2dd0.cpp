// roc 2011-06 008b2dd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2dd0
//
// 008b2dd0  b8e041ad00           mov eax, 0xad41e0
// 008b2dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b2dd0()
{
    return &G;
}
