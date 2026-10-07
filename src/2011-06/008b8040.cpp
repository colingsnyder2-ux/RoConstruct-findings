// roc 2011-06 008b8040  unit: CXTPReportHyperlinks  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8040
//
// 008b8040  b8704dad00           mov eax, 0xad4d70
// 008b8045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b8040()
{
    return &G;
}
