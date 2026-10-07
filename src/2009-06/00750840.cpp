// roc 2009-06 00750840  unit: CXTPReportRecordItemDateTime  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750840
//
// 00750840  b8cc61a200           mov eax, 0xa261cc
// 00750845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00750840()
{
    return &G;
}
