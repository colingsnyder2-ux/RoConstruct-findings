// roc 2010-06 0042e560  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042e560
//
// 0042e560  b8d865a000           mov eax, 0xa065d8
// 0042e565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042e560()
{
    return &G;
}
