// roc 2009-06 0040f680  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040f680
//
// 0040f680  b898eb8a00           mov eax, 0x8aeb98
// 0040f685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040f680()
{
    return &G;
}
