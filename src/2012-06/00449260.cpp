// roc 2012-06 00449260  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449260
//
// 00449260  b8a423b500           mov eax, 0xb523a4
// 00449265  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00449260()
{
    return &G;
}
