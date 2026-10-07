// roc 2011-06 008aa5b0  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008aa5b0
//
// 008aa5b0  b8d83dad00           mov eax, 0xad3dd8
// 008aa5b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008aa5b0()
{
    return &G;
}
