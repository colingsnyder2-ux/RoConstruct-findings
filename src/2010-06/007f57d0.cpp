// roc 2010-06 007f57d0  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f57d0
//
// 007f57d0  b834e0a500           mov eax, 0xa5e034
// 007f57d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f57d0()
{
    return &G;
}
