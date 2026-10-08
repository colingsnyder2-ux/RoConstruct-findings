// roc 2007-08 006abb00  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006abb00
//
// 006abb00  b808547d00           mov eax, 0x7d5408
// 006abb05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006abb00()
{
    return &G;
}
