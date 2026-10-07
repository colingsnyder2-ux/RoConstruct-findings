// roc 2010-06 0080e7a0  unit: CXTPStatusBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e7a0
//
// 0080e7a0  b8ec14a600           mov eax, 0xa614ec
// 0080e7a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080e7a0()
{
    return &G;
}
