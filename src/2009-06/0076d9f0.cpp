// roc 2009-06 0076d9f0  unit: CXTPControlSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d9f0
//
// 0076d9f0  b8506aa200           mov eax, 0xa26a50
// 0076d9f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076d9f0()
{
    return &G;
}
