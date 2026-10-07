// roc 2010-06 008766a0  unit: CStatic  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008766a0
//
// 008766a0  b848d1a600           mov eax, 0xa6d148
// 008766a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008766a0()
{
    return &G;
}
