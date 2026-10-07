// roc 2011-06 00413af0  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00413af0
//
// 00413af0  b89cdea500           mov eax, 0xa5de9c
// 00413af5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00413af0()
{
    return &G;
}
