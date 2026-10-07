// roc 2009-06 00759dc0  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759dc0
//
// 00759dc0  b8a0618f00           mov eax, 0x8f61a0
// 00759dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00759dc0()
{
    return &G;
}
