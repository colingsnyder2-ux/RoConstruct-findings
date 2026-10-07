// roc 2009-06 007757d0  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007757d0
//
// 007757d0  b860be8f00           mov eax, 0x8fbe60
// 007757d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007757d0()
{
    return &G;
}
