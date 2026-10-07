// roc 2010-06 007a9d20  unit: CXTPControlAction  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9d20
//
// 007a9d20  b88c5aa500           mov eax, 0xa55a8c
// 007a9d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a9d20()
{
    return &G;
}
