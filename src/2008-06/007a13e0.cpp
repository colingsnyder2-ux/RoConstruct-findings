// roc 2008-06 007a13e0  unit: CXTMemDC  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a13e0
//
// 007a13e0  b8bcf08600           mov eax, 0x86f0bc
// 007a13e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a13e0()
{
    return &G;
}
