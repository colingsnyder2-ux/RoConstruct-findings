// roc 2010-06 0084d470  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084d470
//
// 0084d470  b8b893a600           mov eax, 0xa693b8
// 0084d475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0084d470()
{
    return &G;
}
