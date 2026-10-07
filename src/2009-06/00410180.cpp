// roc 2009-06 00410180  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00410180
//
// 00410180  b80cef8a00           mov eax, 0x8aef0c
// 00410185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00410180()
{
    return &G;
}
