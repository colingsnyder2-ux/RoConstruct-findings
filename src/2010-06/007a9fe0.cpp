// roc 2010-06 007a9fe0  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9fe0
//
// 007a9fe0  b8e85fbe00           mov eax, 0xbe5fe8
// 007a9fe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a9fe0()
{
    return &G;
}
