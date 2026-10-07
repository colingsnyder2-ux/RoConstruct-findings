// roc 2012-06 00416dc0  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416dc0
//
// 00416dc0  b8c45eb400           mov eax, 0xb45ec4
// 00416dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00416dc0()
{
    return &G;
}
