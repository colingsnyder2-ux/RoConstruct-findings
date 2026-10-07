// roc 2011-06 00826d00  unit: CXTPToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826d00
//
// 00826d00  b84c5ec900           mov eax, 0xc95e4c
// 00826d05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00826d00()
{
    return &G;
}
