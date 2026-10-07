// roc 2011-06 0043d8c0  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d8c0
//
// 0043d8c0  b8a07ea600           mov eax, 0xa67ea0
// 0043d8c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d8c0()
{
    return &G;
}
