// roc 2009-06 0076d9b0  unit: CXTPControlOleItems  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d9b0
//
// 0076d9b0  b8186aa200           mov eax, 0xa26a18
// 0076d9b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076d9b0()
{
    return &G;
}
