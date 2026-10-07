// roc 2009-06 007415c0  unit: CXTPReportControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007415c0
//
// 007415c0  b8d4468f00           mov eax, 0x8f46d4
// 007415c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007415c0()
{
    return &G;
}
