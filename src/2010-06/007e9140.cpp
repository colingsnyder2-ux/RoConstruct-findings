// roc 2010-06 007e9140  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e9140
//
// 007e9140  b814b6a500           mov eax, 0xa5b614
// 007e9145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e9140()
{
    return &G;
}
