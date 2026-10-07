// roc 2009-06 0072d7f0  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d7f0
//
// 0072d7f0  b86c2b8f00           mov eax, 0x8f2b6c
// 0072d7f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0072d7f0()
{
    return &G;
}
