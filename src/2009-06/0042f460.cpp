// roc 2009-06 0042f460  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f460
//
// 0042f460  b8fc348b00           mov eax, 0x8b34fc
// 0042f465  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042f460()
{
    return &G;
}
