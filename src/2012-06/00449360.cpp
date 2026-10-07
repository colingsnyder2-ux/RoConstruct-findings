// roc 2012-06 00449360  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449360
//
// 00449360  b86c24b500           mov eax, 0xb5246c
// 00449365  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00449360()
{
    return &G;
}
