// roc 2011-06 0086bf30  unit: CXTPStatusBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bf30
//
// 0086bf30  b8ccbdac00           mov eax, 0xacbdcc
// 0086bf35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0086bf30()
{
    return &G;
}
