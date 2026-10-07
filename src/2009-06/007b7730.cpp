// roc 2009-06 007b7730  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7730
//
// 007b7730  b82c86a200           mov eax, 0xa2862c
// 007b7735  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b7730()
{
    return &G;
}
