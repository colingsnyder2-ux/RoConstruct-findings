// roc 2007-08 00436fc0  unit: COutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00436fc0
//
// 00436fc0  b848cd7800           mov eax, 0x78cd48
// 00436fc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00436fc0()
{
    return &G;
}
