// roc 2011-06 00829b90  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829b90
//
// 00829b90  b8483bac00           mov eax, 0xac3b48
// 00829b95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00829b90()
{
    return &G;
}
