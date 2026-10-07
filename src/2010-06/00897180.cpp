// roc 2010-06 00897180  unit: CXTColorPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897180
//
// 00897180  b8bc02a700           mov eax, 0xa702bc
// 00897185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00897180()
{
    return &G;
}
