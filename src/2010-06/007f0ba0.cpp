// roc 2010-06 007f0ba0  unit: CXTPControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0ba0
//
// 007f0ba0  b80c77be00           mov eax, 0xbe770c
// 007f0ba5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f0ba0()
{
    return &G;
}
