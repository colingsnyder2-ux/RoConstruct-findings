// roc 2011-06 00412310  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412310
//
// 00412310  b8acd0a500           mov eax, 0xa5d0ac
// 00412315  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412310()
{
    return &G;
}
