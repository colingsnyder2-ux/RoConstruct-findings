// roc 2010-06 0042df80  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042df80
//
// 0042df80  b86865a000           mov eax, 0xa06568
// 0042df85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042df80()
{
    return &G;
}
