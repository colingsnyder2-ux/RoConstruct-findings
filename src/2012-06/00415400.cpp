// roc 2012-06 00415400  unit: CBrowserDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415400
//
// 00415400  b8e050b400           mov eax, 0xb450e0
// 00415405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00415400()
{
    return &G;
}
