// roc 2011-06 00869040  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869040
//
// 00869040  b880b4ac00           mov eax, 0xacb480
// 00869045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00869040()
{
    return &G;
}
