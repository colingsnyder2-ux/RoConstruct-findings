// roc 2007-08 00717470  unit: CXTPRibbonControlTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717470
//
// 00717470  b898a58b00           mov eax, 0x8ba598
// 00717475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00717470()
{
    return &G;
}
