// roc 2011-06 00864200  unit: CXTPControlTabWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864200
//
// 00864200  b89875c900           mov eax, 0xc97598
// 00864205  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00864200()
{
    return &G;
}
