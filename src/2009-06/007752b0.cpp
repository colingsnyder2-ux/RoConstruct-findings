// roc 2009-06 007752b0  unit: CXTPPropExchange  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007752b0
//
// 007752b0  b844be8f00           mov eax, 0x8fbe44
// 007752b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007752b0()
{
    return &G;
}
