// roc 2012-06 004153d0  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004153d0
//
// 004153d0  b88c50b400           mov eax, 0xb4508c
// 004153d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004153d0()
{
    return &G;
}
