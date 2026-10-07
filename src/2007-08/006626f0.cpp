// roc 2007-08 006626f0  unit: CXTPReportRecordItemVariant  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006626f0
//
// 006626f0  b8c4638b00           mov eax, 0x8b63c4
// 006626f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006626f0()
{
    return &G;
}
