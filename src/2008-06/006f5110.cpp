// roc 2008-06 006f5110  unit: CXTPControlLabel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5110
//
// 006f5110  b838789600           mov eax, 0x967838
// 006f5115  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f5110()
{
    return &G;
}
