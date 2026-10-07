// roc 2010-06 007fc7d0  unit: CXTPControlToolbars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc7d0
//
// 007fc7d0  b87c7abe00           mov eax, 0xbe7a7c
// 007fc7d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc7d0()
{
    return &G;
}
