// roc 2009-06 007f33f0  unit: CXTPTabManagerItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f33f0
//
// 007f33f0  b80ca29000           mov eax, 0x90a20c
// 007f33f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f33f0()
{
    return &G;
}
