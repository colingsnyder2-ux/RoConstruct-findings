// roc 2008-06 006dbaa0  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbaa0
//
// 006dbaa0  b8b44e8500           mov eax, 0x854eb4
// 006dbaa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dbaa0()
{
    return &G;
}
