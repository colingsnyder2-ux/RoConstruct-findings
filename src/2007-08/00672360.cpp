// roc 2007-08 00672360  unit: CXTPControlButtonColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672360
//
// 00672360  b8c4678b00           mov eax, 0x8b67c4
// 00672365  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00672360()
{
    return &G;
}
