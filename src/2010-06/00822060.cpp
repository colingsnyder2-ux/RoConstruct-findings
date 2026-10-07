// roc 2010-06 00822060  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822060
//
// 00822060  b88c47a600           mov eax, 0xa6478c
// 00822065  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00822060()
{
    return &G;
}
