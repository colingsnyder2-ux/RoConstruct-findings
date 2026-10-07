// roc 2009-06 0076dab0  unit: CXTPControlLabel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076dab0
//
// 0076dab0  b8886aa200           mov eax, 0xa26a88
// 0076dab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076dab0()
{
    return &G;
}
