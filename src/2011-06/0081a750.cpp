// roc 2011-06 0081a750  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a750
//
// 0081a750  b8545bc900           mov eax, 0xc95b54
// 0081a755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0081a750()
{
    return &G;
}
