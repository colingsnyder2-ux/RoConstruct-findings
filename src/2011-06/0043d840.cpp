// roc 2011-06 0043d840  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d840
//
// 0043d840  b8847ea600           mov eax, 0xa67e84
// 0043d845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d840()
{
    return &G;
}
