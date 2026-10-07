// roc 2009-06 0073a050  unit: CXTPToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a050
//
// 0073a050  b83c56a200           mov eax, 0xa2563c
// 0073a055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0073a050()
{
    return &G;
}
