// roc 2007-08 006fd0f0  unit: CXTPTabManagerItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd0f0
//
// 006fd0f0  b894cd7d00           mov eax, 0x7dcd94
// 006fd0f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fd0f0()
{
    return &G;
}
