// roc 2010-06 0080e6f0  unit: CXTPStatusBarPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e6f0
//
// 0080e6f0  b8d014a600           mov eax, 0xa614d0
// 0080e6f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080e6f0()
{
    return &G;
}
