// roc 2007-08 0040db40  unit: CChatPrompt  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040db40
//
// 0040db40  b8bc677800           mov eax, 0x7867bc
// 0040db45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040db40()
{
    return &G;
}
