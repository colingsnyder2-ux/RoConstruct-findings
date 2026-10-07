// roc 2010-06 0040f820  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f820
//
// 0040f820  b8dc23a000           mov eax, 0xa023dc
// 0040f825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040f820()
{
    return &G;
}
