// roc 2008-06 0070deb0  unit: CXTPStatusBarPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070deb0
//
// 0070deb0  b8b0cf8500           mov eax, 0x85cfb0
// 0070deb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070deb0()
{
    return &G;
}
