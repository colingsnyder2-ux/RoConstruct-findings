// roc 2010-06 00422fb0  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00422fb0
//
// 00422fb0  b85843a000           mov eax, 0xa04358
// 00422fb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00422fb0()
{
    return &G;
}
