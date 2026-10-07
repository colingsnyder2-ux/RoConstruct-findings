// roc 2011-06 0043dea0  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043dea0
//
// 0043dea0  b8bc7fa600           mov eax, 0xa67fbc
// 0043dea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043dea0()
{
    return &G;
}
