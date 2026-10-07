// roc 2010-06 008a7960  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7960
//
// 008a7960  b8e03ca700           mov eax, 0xa73ce0
// 008a7965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a7960()
{
    return &G;
}
