// roc 2008-06 006f51c0  unit: CXTPControlRadioButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f51c0
//
// 006f51c0  b870789600           mov eax, 0x967870
// 006f51c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f51c0()
{
    return &G;
}
