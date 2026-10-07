// roc 2008-06 004332e0  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004332e0
//
// 004332e0  b810248100           mov eax, 0x812410
// 004332e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004332e0()
{
    return &G;
}
