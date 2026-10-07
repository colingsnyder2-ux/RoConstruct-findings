// roc 2012-06 004356a0  unit: CWrapperView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004356a0
//
// 004356a0  b858f7b400           mov eax, 0xb4f758
// 004356a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004356a0()
{
    return &G;
}
