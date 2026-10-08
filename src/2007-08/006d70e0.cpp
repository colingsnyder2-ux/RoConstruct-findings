// roc 2007-08 006d70e0  unit: CXTMemDC  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d70e0
//
// 006d70e0  b83c8b7d00           mov eax, 0x7d8b3c
// 006d70e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d70e0()
{
    return &G;
}
