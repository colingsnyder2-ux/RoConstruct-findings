// roc 2007-08 006625a0  unit: CXTPReportRecordItemPreview  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006625a0
//
// 006625a0  b8a4638b00           mov eax, 0x8b63a4
// 006625a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006625a0()
{
    return &G;
}
