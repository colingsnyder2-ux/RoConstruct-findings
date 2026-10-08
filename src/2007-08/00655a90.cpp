// roc 2007-08 00655a90  unit: CXTPReportControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655a90
//
// 00655a90  b874817c00           mov eax, 0x7c8174
// 00655a95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00655a90()
{
    return &G;
}
