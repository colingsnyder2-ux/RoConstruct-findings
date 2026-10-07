// roc 2010-06 008a7fc0  unit: CXTButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7fc0
//
// 008a7fc0  b81c3ea700           mov eax, 0xa73e1c
// 008a7fc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a7fc0()
{
    return &G;
}
