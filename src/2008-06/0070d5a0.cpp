// roc 2008-06 0070d5a0  unit: CXTPToolTipContext  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d5a0
//
// 0070d5a0  b868cd8500           mov eax, 0x85cd68
// 0070d5a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070d5a0()
{
    return &G;
}
