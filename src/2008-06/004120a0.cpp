// roc 2008-06 004120a0  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004120a0
//
// 004120a0  b854e38000           mov eax, 0x80e354
// 004120a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004120a0()
{
    return &G;
}
