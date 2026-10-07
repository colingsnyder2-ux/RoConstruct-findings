// roc 2007-08 0040cc10  unit: CChatPrompt  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cc10
//
// 0040cc10  b888647800           mov eax, 0x786488
// 0040cc15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cc10()
{
    return &G;
}
