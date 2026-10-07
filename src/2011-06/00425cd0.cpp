// roc 2011-06 00425cd0  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00425cd0
//
// 00425cd0  b8644ca600           mov eax, 0xa64c64
// 00425cd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00425cd0()
{
    return &G;
}
