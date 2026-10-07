// roc 2008-06 006f5020  unit: CXTPControlOleItems  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5020
//
// 006f5020  b8c8779600           mov eax, 0x9677c8
// 006f5025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f5020()
{
    return &G;
}
