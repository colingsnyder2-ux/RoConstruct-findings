// roc 2011-06 0085a1f0  unit: CXTPControlToolbars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a1f0
//
// 0085a1f0  b80c71c900           mov eax, 0xc9710c
// 0085a1f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a1f0()
{
    return &G;
}
