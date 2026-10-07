// roc 2010-06 00410270  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00410270
//
// 00410270  b86c27a000           mov eax, 0xa0276c
// 00410275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00410270()
{
    return &G;
}
