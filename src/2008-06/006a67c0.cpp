// roc 2008-06 006a67c0  unit: CXTPEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a67c0
//
// 006a67c0  b838088500           mov eax, 0x850838
// 006a67c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a67c0()
{
    return &G;
}
