// roc 2012-06 00417790  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00417790
//
// 00417790  b87c63b400           mov eax, 0xb4637c
// 00417795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00417790()
{
    return &G;
}
