// roc 2011-06 0085a220  unit: CXTPControlOleItems  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a220
//
// 0085a220  b82871c900           mov eax, 0xc97128
// 0085a225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a220()
{
    return &G;
}
