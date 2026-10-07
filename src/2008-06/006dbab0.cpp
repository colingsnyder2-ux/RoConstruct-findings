// roc 2008-06 006dbab0  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbab0
//
// 006dbab0  b8ec4e8500           mov eax, 0x854eec
// 006dbab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dbab0()
{
    return &G;
}
