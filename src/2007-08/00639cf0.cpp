// roc 2007-08 00639cf0  unit: CXTPControlAction  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639cf0
//
// 00639cf0  b858627c00           mov eax, 0x7c6258
// 00639cf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00639cf0()
{
    return &G;
}
