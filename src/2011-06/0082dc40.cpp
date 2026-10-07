// roc 2011-06 0082dc40  unit: CXTPReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082dc40
//
// 0082dc40  b86440ac00           mov eax, 0xac4064
// 0082dc45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0082dc40()
{
    return &G;
}
