// roc 2010-06 007e8e00  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8e00
//
// 007e8e00  b830a9a500           mov eax, 0xa5a930
// 007e8e05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e8e00()
{
    return &G;
}
