// roc 2008-06 006f4ff0  unit: CXTPControlToolbars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f4ff0
//
// 006f4ff0  b8ac779600           mov eax, 0x9677ac
// 006f4ff5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f4ff0()
{
    return &G;
}
