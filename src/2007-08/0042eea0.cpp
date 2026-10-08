// roc 2007-08 0042eea0  unit: CWrapperView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042eea0
//
// 0042eea0  b8f0a67800           mov eax, 0x78a6f0
// 0042eea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042eea0()
{
    return &G;
}
