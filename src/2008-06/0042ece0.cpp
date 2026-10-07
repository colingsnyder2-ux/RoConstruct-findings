// roc 2008-06 0042ece0  unit: CWrapperView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ece0
//
// 0042ece0  b8e0078100           mov eax, 0x8107e0
// 0042ece5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042ece0()
{
    return &G;
}
