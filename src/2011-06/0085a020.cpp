// roc 2011-06 0085a020  unit: CXTPControlWindowList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a020
//
// 0085a020  b8f070c900           mov eax, 0xc970f0
// 0085a025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a020()
{
    return &G;
}
