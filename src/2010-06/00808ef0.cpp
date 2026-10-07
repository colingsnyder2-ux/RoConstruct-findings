// roc 2010-06 00808ef0  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808ef0
//
// 00808ef0  b86009a600           mov eax, 0xa60960
// 00808ef5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00808ef0()
{
    return &G;
}
