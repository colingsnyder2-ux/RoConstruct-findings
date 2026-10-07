// roc 2011-06 008a5c50  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5c50
//
// 008a5c50  b8448ec900           mov eax, 0xc98e44
// 008a5c55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5c50()
{
    return &G;
}
