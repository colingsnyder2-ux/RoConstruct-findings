// roc 2007-08 006622d0  unit: CXTPReportRecordItemText  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006622d0
//
// 006622d0  b850638b00           mov eax, 0x8b6350
// 006622d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006622d0()
{
    return &G;
}
