// roc 2009-06 007508e0  unit: CXTPReportRecordItemPreview  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007508e0
//
// 007508e0  b8e861a200           mov eax, 0xa261e8
// 007508e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007508e0()
{
    return &G;
}
