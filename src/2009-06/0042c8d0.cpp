// roc 2009-06 0042c8d0  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c8d0
//
// 0042c8d0  b89c298b00           mov eax, 0x8b299c
// 0042c8d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c8d0()
{
    return &G;
}
