// roc 2010-06 0042e310  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042e310
//
// 0042e310  b8bc65a000           mov eax, 0xa065bc
// 0042e315  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042e310()
{
    return &G;
}
