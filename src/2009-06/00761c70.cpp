// roc 2009-06 00761c70  unit: CXTPControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761c70
//
// 00761c70  b88c66a200           mov eax, 0xa2668c
// 00761c75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00761c70()
{
    return &G;
}
